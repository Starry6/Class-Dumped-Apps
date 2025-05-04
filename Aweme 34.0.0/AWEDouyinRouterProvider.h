@interface AWEDouyinRouterProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerDeviceOnceWithCompletion:;
- (void)handleLoginRouterWithParams:ignoreDeviceIdCheck:;
- (BOOL)canSSOLoginAndAnalyzeSchemaWithDict:;
- (unsigned long long)loginPanelStyleFromParams:;
- (void)ssoLoginWithPlatform:;
- (void)handleLoginRouterWithParams:;
+ (id)sharedInstance;
@end
