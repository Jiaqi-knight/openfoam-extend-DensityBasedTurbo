/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright held by original author
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Class
    rusanovALEFlux

Description
    Implementation of inviscid numerical fluxes based on Rusanov FDS scheme
    This is the first order scheme

Author
    Aleksandar Jemcov  All rights reserved.
    Oliver Borm  All rights reserved.

SourceFiles
    rusanovALEFlux.H

\*---------------------------------------------------------------------------*/

#ifndef rusanovALEFlux_H
#define rusanovALEFlux_H

#include "fvCFD.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                           Class rusanovALEFlux Declaration
\*---------------------------------------------------------------------------*/

class rusanovALEFlux
{

public:

    // Constructors

        //- Construct null
        rusanovALEFlux()
        {}


    // Destructor - default


    // Member Functions

        //- Update fluxes based on current left and right states
        void evaluateFlux
        (
            scalar& rhoFlux,
            vector& rhoUFlux,
            scalar& rhoEFlux,
            const scalar pLeft,
            const scalar pRight,
            const vector ULeft,
            const vector URight,
// //
//     const scalar TLeft,
//     const scalar TRight,
// //
            const scalar rhoLeft,
            const scalar rhoRight,
// //
            const scalar kLeft,
            const scalar kRight,
// //
//     const scalar RLeft,
//     const scalar RRight,
//     const scalar CvLeft,
//     const scalar CvRight,
// //
            const scalar kappaLeft,
            const scalar kappaRight,
// //
            const vector Sf,
            const scalar magSf,
            const vector dotX,
            const scalar Konstant
        ) const;
};

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
