@interface SOConfigurationVersion : NSObject
@property (nonatomic) q version;
- (unsigned long long)_state;
- (id)initWithMode:;
- (void)dealloc;
- (long long)version;
- (long long)checkVersion;
- (void)_setStateAndNotify:;
- (void)setAppSSOUnavailable;
- (void)increaseVersionWithMessage:;
+ (void)reset;
@end
