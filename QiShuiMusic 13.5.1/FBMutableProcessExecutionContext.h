@interface FBMutableProcessExecutionContext : FBProcessExecutionContext
@property (nonatomic) RBSProcessIdentity identity;
@property (nonatomic) NSArray arguments;
@property (nonatomic) NSDictionary environment;
@property (nonatomic) NSURL standardOutputURL;
@property (nonatomic) NSURL standardErrorURL;
@property (nonatomic) BOOL waitForDebugger;
@property (nonatomic) BOOL disableASLR;
@property (nonatomic) BOOL checkForLeaks;
@property (nonatomic) q launchIntent;
@property (nonatomic) <FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;
- (id)copyWithZone:;
@end
