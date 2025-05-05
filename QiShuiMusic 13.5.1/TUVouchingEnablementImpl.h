@interface TUVouchingEnablementImpl : NSObject
@property (nonatomic) <TUFeatureFlags> featureFlags;
@property (nonatomic) NSUserDefaults userDefaults;
@property (nonatomic) FTServerBag serverBag;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL shouldForceVerificationFailures;
- (id)serverBag;
- (void)setServerBag:;
- (void)setUserDefaults:;
- (id)init;
- (void)setFeatureFlags:;
- (id)initWithFeatureFlags:userDefaults:serverBag:;
- (id)userDefaults;
- (BOOL)shouldForceVerificationFailures;
- (void).cxx_destruct;
- (BOOL)serverBagValueForKey:withDefault:;
- (id)featureFlags;
- (BOOL)isEnabled;
@end
