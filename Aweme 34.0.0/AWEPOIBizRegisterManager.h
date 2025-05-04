@interface AWEPOIBizRegisterManager : NSObject
@property (nonatomic) NSMutableArray providers;
- (void)registerExtensionWithBiz:extensionManager:pageContext:;
- (void)setupCommonExtensionsWithManager:;
- (void)updateBizCode:extensionManager:pageContext:;
- (id)commonProvider;
- (id)performanceProviderForBiz:;
- (id)uiProviderForBiz:;
- (id)providers;
- (void)registerProvider:;
- (id)init;
- (void)setProviders:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
