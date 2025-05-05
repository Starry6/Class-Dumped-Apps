@interface LynxNavigator : NSObject
@property (nonatomic) q capacity;
@property (nonatomic) <LynxSchemaInterceptor> interceptor;
- (void)setInterceptor:;
- (id)getCurrentCardManager;
- (id)interceptor;
- (void)navigate:withParam:;
- (BOOL)onNavigateBack;
- (void)registerLynxHolder:;
- (void)registerLynxHolder:initLynxView:;
- (void)replace:withParam:;
- (void)setSchemaInterceptor:;
- (void)unregisterLynxHolder:;
- (long long)capacity;
- (void)setCapacity:;
- (id)init;
- (void)goBack;
- (void)didEnterBackground:;
- (void).cxx_destruct;
- (void)didEnterForeground:;
+ (id)sharedInstance;
@end
