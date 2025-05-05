@interface ByteADTracker : NSObject
@property (nonatomic) BDATConfiguration configuration;
@property (nonatomic) BDATC2STracker tracker;
- (id)c2sTracker;
- (void)sdkSessionLaunchMonitor;
- (void)setupADTracker;
- (void)setTracker:;
- (id)init;
- (id)tracker;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)versionNumber;
+ (id)sharedADTracker;
+ (id)c2sTracker;
+ (void)registerMacroTokens:;
+ (void)registerUserAgent:;
+ (void)updateConfiguration:;
@end
