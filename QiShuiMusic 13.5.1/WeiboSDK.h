@interface WeiboSDK : NSObject
+ (void)callBackSendSuccess:Completion:;
+ (void)commentToWeibo:;
+ (id)formIOS16Scheme:attachmentJson:;
+ (void)attachContextNeed:;
+ (long long)attatchContextBegin;
+ (void)attatchContextEnd;
+ (void)banGetIdfa:;
+ (id)callbackSchemePrefix;
+ (id)callbackUniversalLinekPrefix;
+ (void)didReceiveUnSupportedRequest:;
+ (void)didReceiveUnSupportedResponse:;
+ (void)directlySendResponseToCurrentApp:;
+ (id)formIOS16AttachmentJsonByTransferObj:level:;
+ (id)getSDKVersion;
+ (id)getWeiboAppInstallUrl;
+ (id)getWeiboSDKUA;
+ (BOOL)handleOpenURL:delegate:;
+ (BOOL)handleOpenUniversalLink:delegate:;
+ (BOOL)handleOpenUrl:delegate:callBackUrlPrefix:;
+ (BOOL)hasDataInObj:;
+ (BOOL)isCanSSOAndShareInWeiboApp;
+ (BOOL)isCanSSOInWeiboApp;
+ (BOOL)isCanShareInWeiboAPP;
+ (BOOL)isEmptyOrWhitespace:;
+ (BOOL)isWeiboAppInstalled;
+ (void)linkToArticle:;
+ (void)linkToProfile;
+ (void)linkToSearch:;
+ (void)linkToSingleBlog:blogID:;
+ (void)linkToTimeLine;
+ (void)linkToUser:;
+ (void)logOutWithToken:delegate:withTag:;
+ (BOOL)needAttachmentAlgorithmByLevel:attachment:;
+ (void)openAppWithTransferObject:completion:;
+ (void)openURLObject:completion:;
+ (BOOL)openWeiboApp;
+ (id)queryDictionaryOfURLQuery:;
+ (id)queryValueWithName:urlString:;
+ (id)registedAppsPasteboardName;
+ (BOOL)registerApp:universalLink:;
+ (BOOL)registerAppWithAppKey:universalLink:;
+ (id)requestUserInfoCache;
+ (void)sendResponse:completion:;
+ (id)serializeURLString:withParams:;
+ (void)shareToWeibo:;
+ (long long)sizeForObj:;
+ (BOOL)unregisterApp;
+ (id)wbsdk_platform;
+ (void)sendRequest:completion:;
+ (id)hashKey;
+ (void)enableDebugMode:;
@end
