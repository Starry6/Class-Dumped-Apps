@interface DIRSThrottlterPlugin : DIRSBasicModule
@property (nonatomic) q backOffRadio;
@property (nonatomic) q maxRequests;
@property (nonatomic) double adjustedInterval;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowed:reason:;
- (void)setMaxRequests:;
- (void)_restoreAdjustment;
- (double)adjustedInterval;
- (long long)backOffRadio;
- (long long)maxRequests;
- (void)setBackOffRadio:;
- (void)setBasicInterval:;
- (void)configure:;
- (void)commonInit;
- (void).cxx_destruct;
- (void)adjust:;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
