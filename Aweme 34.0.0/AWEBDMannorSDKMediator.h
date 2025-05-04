@interface AWEBDMannorSDKMediator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (BOOL)isBigFontABTestOn;
- (void)requestForJSONWithURL:params:method:needCommonParams:callback:;
- (id)trackURL:;
- (BOOL)isChinese;
- (id)sendAdLog:model:;
- (id)sendAdLog:;
- (id)sendLogV3:;
- (void)preloadWithAppID:creativeID:logExtra:downloadURL:SKANParams:downloadScene:webURL:complianceData:completion:;
- (void)processWithAppID:preload:creativeID:logExtra:downloadURL:appStoreEnabled:SKANParams:downloadScene:webURL:complianceData:;
- (BOOL)isThemeStyleLight;
- (void)showToast:type:icon:;
- (id)appInfo;
- (id)userInfo;
+ (void)registerMediator;
@end
