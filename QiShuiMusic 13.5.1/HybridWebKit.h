@interface HybridWebKit : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createViewWithFrame:params:url:;
- (id)appendCommonParamsIfNeeded:param:;
- (BOOL)closeSessionWithContainerID:animated:completion:;
- (id)createViewWithFrame:context:;
- (void)initWebKit;
- (long long)runtimeTypeForRuntime:;
- (void)setupPIAGlobalInfo;
- (void)setupPIAInstanceInfoWithView:params:;
- (id)webViewSettingsWithParam:;
+ (void)hybrid_service_register;
+ (id)sharedInstance;
@end
