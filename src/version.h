// Copyright (c) 2012 The Cosmoscoin developers
// Copyright (c) 2012 Cosmoscoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef COSMOSCOIN_VERSION_H
#define COSMOSCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it
#define CLIENT_VERSION_MAJOR       0
#define CLIENT_VERSION_MINOR       1
#define CLIENT_VERSION_REVISION    0
#define CLIENT_VERSION_BUILD       0

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR 
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 99999;

// earlier versions not supported as of Feb 2012, and are disconnected
static const int MIN_PROTO_VERSION = 99999;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 99999;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 99999;
static const int NOBLKS_VERSION_END = 99999;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 99999;

#endif
