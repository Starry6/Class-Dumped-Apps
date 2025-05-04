@interface AWEPOIReflowResourceService : NSObject
@property (nonatomic) NSMutableDictionary configs;
@property (nonatomic) NSMutableArray components;
@property (nonatomic) BOOL bInterceptor;
- (void)setConfigs:;
- (id)aweNearbyUtilManager;
- (void)setupReflowConfig;
- (void)filterReflowComponent;
- (void)setupReflowComponent;
- (void)setBInterceptor:;
- (id)shareReflowComponent;
- (id)findReflowComponentWithSchema:;
- (BOOL)switchRouterWithComponent:schema:;
- (BOOL)bInterceptor;
- (id)init;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)components;
- (id)configs;
@end
