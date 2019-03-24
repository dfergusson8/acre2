#pragma once

#include "compat.h"
#include "Types.h"
#include "Macros.h"
#include "Log.h"
#include "IRpcFunction.h"

#include "IServer.h"
#include "Engine.h"

#include "TextMessage.h"

#include <string>

RPC_FUNCTION(stopIntercomSpeaking) {

    CEngine::getInstance()->getClient()->localStopSpeaking(acre_speaking_intercom);

    return acre_result_ok;
}
DECLARE_MEMBER(char *, Name);
};