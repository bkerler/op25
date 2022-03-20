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
/* BINDTOOL_HEADER_FILE(fsk4_demod_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(5c319eafe8d272b9551b6b72d389e2cd)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25/fsk4_demod_ff.h>
// pydoc.h is automatically generated in the build directory
#include <fsk4_demod_ff_pydoc.h>

void bind_fsk4_demod_ff(py::module& m)
{

    using fsk4_demod_ff    = ::gr::op25::fsk4_demod_ff;


    py::class_<fsk4_demod_ff, gr::block, gr::basic_block,
        std::shared_ptr<fsk4_demod_ff>>(m, "fsk4_demod_ff", D(fsk4_demod_ff))

        .def(py::init(&fsk4_demod_ff::make),
           py::arg("queue"),
           py::arg("sample_rate_Hz"),
           py::arg("symbol_rate_Hz"),
           py::arg("bfsk") = false,
           D(fsk4_demod_ff,make)
        )
        




        
        .def("reset",&fsk4_demod_ff::reset,       
            D(fsk4_demod_ff,reset)
        )


        
        .def("set_rate",&fsk4_demod_ff::set_rate,       
            py::arg("sample_rate_Hz"),
            py::arg("symbol_rate_Hz"),
            D(fsk4_demod_ff,set_rate)
        )

        ;




}








