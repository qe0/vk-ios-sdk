#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Source/API/methods/VKApiBase.h"
#import "Source/API/methods/VKApiCaptcha.h"
#import "Source/API/methods/VKApiConst.h"
#import "Source/API/methods/VKApiDocs.h"
#import "Source/API/methods/VKApiFriends.h"
#import "Source/API/methods/VKApiGroups.h"
#import "Source/API/methods/VKApiModels.h"
#import "Source/API/methods/VKApiPhotos.h"
#import "Source/API/methods/VKApiUsers.h"
#import "Source/API/methods/VKApiWall.h"
#import "Source/API/models/VKApiObject.h"
#import "Source/API/models/VKApiObjectArray.h"
#import "Source/API/models/VKCounters.h"
#import "Source/API/models/VKDocs.h"
#import "Source/API/models/VKGroup.h"
#import "Source/API/models/VKLikes.h"
#import "Source/API/models/VKPhoto.h"
#import "Source/API/models/VKPhotoSize.h"
#import "Source/API/models/VKRelative.h"
#import "Source/API/models/VKSchool.h"
#import "Source/API/models/VKUniversity.h"
#import "Source/API/models/VKUser.h"
#import "Source/API/upload/VKUploadMessagesPhotoRequest.h"
#import "Source/API/upload/VKUploadPhotoBase.h"
#import "Source/API/upload/VKUploadPhotoRequest.h"
#import "Source/API/upload/VKUploadWallPhotoRequest.h"
#import "Source/API/VKApi.h"
#import "Source/Core/NSError+VKError.h"
#import "Source/Core/VKError.h"
#import "Source/Core/VKHTTPClient.h"
#import "Source/Core/VKHTTPOperation.h"
#import "Source/Core/VKJSONOperation.h"
#import "Source/Core/VKObject.h"
#import "Source/Core/VKOperation.h"
#import "Source/Core/VKRequest.h"
#import "Source/Core/VKRequestsScheduler.h"
#import "Source/Core/VKResponse.h"
#import "Source/Image/VKImageParameters.h"
#import "Source/Image/VKUploadImage.h"
#import "Source/Utils/NSString+MD5.h"
#import "Source/Utils/OrderedDictionary.h"
#import "Source/Utils/VKUtil.h"
#import "Source/Views/VKActivity.h"
#import "Source/Views/VKAuthorizeController.h"
#import "Source/Views/VKCaptchaView.h"
#import "Source/Views/VKCaptchaViewController.h"
#import "Source/Views/VKShareDialogController.h"
#import "Source/Views/VKSharedTransitioningObject.h"
#import "Source/VKAccessToken.h"
#import "Source/VKAuthorizationResult.h"
#import "Source/VKBatchRequest.h"
#import "Source/VKBundle.h"
#import "Source/VKPermissions.h"
#import "Source/VKSdk.h"
#import "Source/VKSdkVersion.h"

FOUNDATION_EXPORT double VK_ios_sdkVersionNumber;
FOUNDATION_EXPORT const unsigned char VK_ios_sdkVersionString[];

