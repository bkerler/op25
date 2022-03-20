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
/* BINDTOOL_HEADER_FILE(ambe_encoder_sb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9ac675c0207e69f1882d8d4d8eb119d1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/op25_repeater/ambe_encoder_sb.h>
// pydoc.h is automatically generated in the build directory
#include <ambe_encoder_sb_pydoc.h>

void bind_ambe_encoder_sb(py::module& m)
{

    using ambe_encoder_sb    = ::gr::op25_repeater::ambe_encoder_sb;


    py::class_<ambe_encoder_sb, gr::block, gr::basic_block,
        std::shared_ptr<ambe_encoder_sb>>(m, "ambe_encoder_sb", D(ambe_encoder_sb))

        .def(py::init(&ambe_encoder_sb::make),
           py::arg("versbose_flag"),
           D(ambe_encoder_sb,make)
        )
        




        
        .def("set_gain_adjust",&ambe_encoder_sb::set_gain_adjust,       
            py::arg("gain_adjust"),
            D(ambe_encoder_sb,set_gain_adjust)
        )

        ;




}








