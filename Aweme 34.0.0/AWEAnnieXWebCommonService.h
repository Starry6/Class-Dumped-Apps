@interface AWEAnnieXWebCommonService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableFalcon;
- (BOOL)webIntercept;
- (BOOL)isKindOfWebViewController:;
+ (id)secUrlString;
+ (BOOL)isToAppStoreRequestURLStr:;
+ (id)generateWebSecureLinkConfig:;
+ (BOOL)falconSchemeHandlerEnable:;
+ (id)additionalRequestHeaderFields;
+ (id)buildBOEURLWithURL:;
+ (id)generateUA:;
+ (BOOL)p_matchAweFalconList:;
@end
