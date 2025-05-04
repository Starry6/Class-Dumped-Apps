@interface AWEOpenPlatformHandleOAuthService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)consumerGetReqFromURL:;
+ (BOOL)handleConsumerGetReq:withUserInfo:completion:;
+ (id)URLFromProviderGetResp:;
+ (BOOL)isUniversalLink:;
+ (BOOL)isOpenURLOptionUniversalLinksOnly:;
+ (BOOL)ignoreLogin;
+ (BOOL)checkNeedSkipMobileBind:;
+ (id)serviceName;
@end
