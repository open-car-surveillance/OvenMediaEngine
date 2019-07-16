//==============================================================================
//
//  MpegTsProvider
//
//  Created by Benjamin
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================

#include "mpegts_application.h"
#include "mpegts_stream.h"

#include "base/provider/application.h"
#include "base/application/stream_info.h"

#define OV_LOG_TAG "MpegTsApplication"

std::shared_ptr<MpegTsApplication> MpegTsApplication::Create(const info::Application *application_info)
{
	auto application = std::make_shared<MpegTsApplication>(application_info);
	return application;
}

MpegTsApplication::MpegTsApplication(const info::Application *application_info)
	: Application(application_info)
{
}

std::shared_ptr<Stream> MpegTsApplication::OnCreateStream()
{
	logtd("OnCreateStream");

	auto stream = MpegTsStream::Create();

	return stream;
}