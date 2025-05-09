@interface QQApi : NSObject
- (id)init;
+ (id)getQQInstallURL;
+ (BOOL)canUseSDK;
+ (void)cgiShareReportWithMessage:andCallsource:;
+ (long long)checkLegalForMessage:;
+ (long long)checkMessageContentLegal:;
+ (BOOL)checkQQApiURLMessage:;
+ (BOOL)checkQQGroupProMessage:;
+ (BOOL)checkQQSupportMessage:;
+ (id)getAdItemArray;
+ (id)getTIMInstallURL;
+ (id)handleOpenURL:sourceApplication:annotation:;
+ (BOOL)isQQApiObjectLegal:;
+ (BOOL)isQQInstalled;
+ (BOOL)isQQSupportAddFriend;
+ (BOOL)isQQSupportApi;
+ (BOOL)isQQSupportApiForAvatarSetting;
+ (BOOL)isQQSupportApiForCheckAuth;
+ (BOOL)isQQSupportApiForDataLine;
+ (BOOL)isQQSupportApiForGameConsortiumBindingGroup;
+ (BOOL)isQQSupportApiForGroupPro;
+ (BOOL)isQQSupportApiForLaunchMiniApp;
+ (BOOL)isQQSupportApiForMiniApp;
+ (BOOL)isQQSupportApiForProxyLogin;
+ (BOOL)isQQSupportApiForThirdAppGroup;
+ (BOOL)isQQSupportQZoneMediaShare;
+ (BOOL)isQQSupportQZoneShare;
+ (BOOL)isTIMInstalled;
+ (BOOL)isTIMSupportAddFriend;
+ (BOOL)isTIMSupportApiForGameConsortiumBindingGroup;
+ (BOOL)openQQApp;
+ (BOOL)openTIMApp;
+ (void)registerAccessToken:;
+ (void)registerPluginWithId:;
+ (void)registerQQConnectAppId:;
+ (void)registerQQConnectOpenId:;
+ (void)registerQQUin:;
+ (void)setIsUserAgreedAuthorization:;
+ (void)showErrorWithWebView:;
+ (void)showInstallQQTips;
+ (void)showInstallTIMTips;
+ (id)supportShareScheme;
+ (long long)sendMessage:;
+ (id)handleOpenURL:;
@end
