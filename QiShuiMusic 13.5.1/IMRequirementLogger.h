@interface IMRequirementLogger : NSObject
@property (nonatomic) C loggingLevel;
@property (nonatomic) r* categoryOverride;
@property (nonatomic) BOOL throwFailures;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setLoggingLevel:;
- (void)updateSettingsFromUserDefaults;
- (id)categoryOverride;
- (void)setCategoryOverride:;
- (id)requirementDidFail:;
- (unsigned char)loggingLevel;
- (BOOL)throwFailures;
- (void)setThrowFailures:;
+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:;
@end
