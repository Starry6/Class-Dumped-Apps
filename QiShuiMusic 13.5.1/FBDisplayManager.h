@interface FBDisplayManager : FBSDisplayMonitor
@property (nonatomic) FBSDisplayConfiguration mainDisplay;
- (id)init;
- (void)dealloc;
- (void)updateTransformsWithCompletion:;
- (id)mainDisplay;
- (void)invalidate;
- (void)postBookendConnections;
+ (id)sharedInstance;
+ (id)mainIdentity;
+ (id)mainDisplay;
+ (id)mainConfiguration;
@end
