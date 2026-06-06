#***************************************************************************
#                                  _   _ ____  _
#  Project                     ___| | | |  _ \| |
#                             / __| | | | |_) | |
#                            | (__| |_| |  _ <| |___
#                             \___|\___/|_| \_\_____|
#
# Copyright (C) Daniel Stenberg, <daniel@haxx.se>, et al.
#
# This software is licensed as described in the file COPYING, which
# you should have received as part of this distribution. The terms
# are also available at https://curl.se/docs/copyright.html.
#
# You may opt to use, copy, modify, merge, publish, distribute and/or sell
# copies of the Software, and permit persons to whom the Software is
# furnished to do so, under the terms of the COPYING file.
#
# This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
# KIND, either express or implied.
#
# SPDX-License-Identifier: curl
#
###########################################################################
# Shared between CMakeLists.txt and Makefile.am

# Using the backslash as line continuation character might be problematic with
# some make flavours. If we ever want to change this in a portable manner then
# we should consider this idea :
# CSRC1 = file1.c file2.c file3.c
# CSRC2 = file4.c file5.c file6.c
# CSOURCES = $(CSRC1) $(CSRC2)

# libcurl has sources that provide functions named curlx_* that are not part of
# the official API, but we reuse the code here to avoid duplication.
CURLX_CFILES = \
  ../lib/curlx/base64.c \
  ../lib/curlx/basename.c \
  ../lib/curlx/dynbuf.c \
  ../lib/curlx/fopen.c \
  ../lib/curlx/multibyte.c \
  ../lib/curlx/nonblock.c \
  ../lib/curlx/strcopy.c \
  ../lib/curlx/strdup.c \
  ../lib/curlx/strerr.c \
  ../lib/curlx/strparse.c \
  ../lib/curlx/timediff.c \
  ../lib/curlx/timeval.c \
  ../lib/plat/windows/version_win32.c \
  ../lib/curlx/wait.c \
  ../lib/curlx/warnless.c \
  ../lib/plat/windows/winapi.c

CURLX_HFILES = \
  ../lib/curl_setup.h \
  ../lib/curlx/base64.h \
  ../lib/curlx/basename.h \
  ../lib/curlx/dynbuf.h \
  ../lib/curlx/fopen.h \
  ../lib/curlx/multibyte.h \
  ../lib/curlx/nonblock.h \
  ../lib/curlx/strcopy.h \
  ../lib/curlx/strdup.h \
  ../lib/curlx/strerr.h \
  ../lib/curlx/strparse.h \
  ../lib/curlx/timediff.h \
  ../lib/curlx/timeval.h \
  ../lib/plat/windows/version_win32.h \
  ../lib/curlx/wait.h \
  ../lib/curlx/warnless.h \
  ../lib/curlx/winapi.h

TOOLX_CFILES = \
  tool/tool_time.c

TOOLX_HFILES = \
  tool/tool_time.h

CURL_CFILES = \
  tool/config2setopts.c \
  tool/slist_wc.c \
  tool/terminal.c \
  tool/tool_cb_dbg.c \
  tool/tool_cb_hdr.c \
  tool/tool_cb_prg.c \
  tool/tool_cb_rea.c \
  tool/tool_cb_see.c \
  tool/tool_cb_soc.c \
  tool/tool_cb_wrt.c \
  tool/tool_cfgable.c \
  tool/tool_dirhie.c \
  tool/plat/windows/tool_doswin.c \
  tool/tool_easysrc.c \
  tool/tool_filetime.c \
  tool/tool_findfile.c \
  tool/tool_formparse.c \
  tool/tool_getparam.c \
  tool/tool_getpass.c \
  tool/tool_help.c \
  tool/tool_helpers.c \
  tool/tool_ipfs.c \
  tool/tool_libinfo.c \
  tool/tool_listhelp.c \
  tool_main.c \
  tool/tool_msgs.c \
  tool/tool_operate.c \
  tool/tool_operhlp.c \
  tool/tool_paramhlp.c \
  tool/tool_parsecfg.c \
  tool/tool_progress.c \
  tool/tool_setopt.c \
  tool/tool_ssls.c \
  tool/tool_stderr.c \
  tool/tool_urlglob.c \
  tool/tool_util.c \
  tool/plat/vms/tool_vms.c \
  tool/tool_writeout.c \
  tool/tool_writeout_json.c \
  tool/tool_xattr.c \
  tool/var.c \
  $(TOOLX_CFILES)

CURL_HFILES = \
  tool/config2setopts.h \
  tool/slist_wc.h \
  tool/terminal.h \
  tool/tool_cb_dbg.h \
  tool/tool_cb_hdr.h \
  tool/tool_cb_prg.h \
  tool/tool_cb_rea.h \
  tool/tool_cb_see.h \
  tool/tool_cb_soc.h \
  tool/tool_cb_wrt.h \
  tool/tool_cfgable.h \
  tool/tool_dirhie.h \
  tool/tool_doswin.h \
  tool/tool_easysrc.h \
  tool/tool_filetime.h \
  tool/tool_findfile.h \
  tool/tool_formparse.h \
  tool/tool_getparam.h \
  tool/tool_getpass.h \
  tool/tool_help.h \
  tool/tool_helpers.h \
  tool/tool_hugehelp.h \
  tool/tool_ipfs.h \
  tool/tool_libinfo.h \
  tool_main.h \
  tool/tool_msgs.h \
  tool/tool_operate.h \
  tool/tool_operhlp.h \
  tool/tool_paramhlp.h \
  tool/tool_parsecfg.h \
  tool/tool_progress.h \
  tool/tool_sdecls.h \
  tool/tool_setopt.h \
  tool/tool_setup.h \
  tool/tool_ssls.h \
  tool/tool_stderr.h \
  tool/tool_urlglob.h \
  tool/tool_util.h \
  tool/tool_version.h \
  tool/tool_vms.h \
  tool/tool_writeout.h \
  tool/tool_writeout_json.h \
  tool/tool_xattr.h \
  tool/var.h \
  $(TOOLX_HFILES)

CURL_RCFILES = ../products/curl/curl.rc
