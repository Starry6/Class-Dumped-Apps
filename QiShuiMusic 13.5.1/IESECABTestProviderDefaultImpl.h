@interface IESECABTestProviderDefaultImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (id)getCurrentUserKey;
- (void)onLog:;
- (id)init;
- (void)dealloc;
+ (void)editExperimentValueForKey:value:;
+ (void)fetchExperimentDataWithParams:headers:;
+ (id)getExperimentValueForKey:withExposure:;
+ (unsigned long long)p_bdValueTypeConverter:;
+ (BOOL)p_lazyExposeIfNeeded:exposure:;
+ (void)p_lazyExposeThenRegister;
+ (void)p_postUserChangeNotificationWithUID:;
+ (void)p_registerExposeVidBlock;
+ (void)registerExperimentWithKey:owner:description:defaultValue:valueType:isSticky:isBind2User:;
+ (void)setup;
@end
