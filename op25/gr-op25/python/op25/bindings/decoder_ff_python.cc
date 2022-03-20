/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(decoder_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e6c01669cff6eee13727dbfefd614ef3)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25/decoder_ff.h>
// pydoc.h is automatically generated in the build directory
#include <decoder_ff_pydoc.h>

void bind_decoder_ff(py::module& m)
{

    using decoder_ff    = ::gr::op25::decoder_ff;


    py::class_<decoder_ff, gr::block, gr::basic_block,
        std::shared_ptr<decoder_ff>>(m, "decoder_ff", D(decoder_ff))

        .def(py::init(&decoder_ff::make),
           D(decoder_ff,make)
        )
        




        
        .def("destination",&decoder_ff::destination,       
            D(decoder_ff,destination)
        )


        
        .def("get_msgq",&decoder_ff::get_msgq,       
            D(decoder_ff,get_msgq)
        )


        
        .def("set_msgq",&decoder_ff::set_msgq,       
            py::arg("msgq"),
            D(decoder_ff,set_msgq)
        )

        ;




}








