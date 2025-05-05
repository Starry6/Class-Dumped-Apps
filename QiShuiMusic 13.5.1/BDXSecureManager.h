@interface BDXSecureManager : NSObject
@property (nonatomic) BDXSecureConfig secureConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)blockJumpingApp;
- (void)disableJumpingApp:url:;
- (void)disableJumpingAppWithConfig:webView:url:;
- (id)globalConfig:;
- (void)injectWebInstance:;
- (void)injectWebInstance:withBid:;
- (void)injectWebInstance:withConfig:;
- (id)secureConfig;
- (void)setSecureConfig:;
- (void)setupDefaultSCCConfigSetting;
- (void)setupDefaultSecLinkConfigSetting;
- (void).cxx_destruct;
- (id)_defaultKey;
+ (id)sharedInstance;
+ (void)setup;
@end
