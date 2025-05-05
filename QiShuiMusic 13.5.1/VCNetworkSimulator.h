@interface VCNetworkSimulator : NSObject
@property (nonatomic) VCEmulatedNetwork network;
- (id)init;
- (id)network;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)createDefaultPolicies;
- (id)loadPoliciesFromJsonFile;
- (void)setupNetwork;
- (int)processNetwork;
- (int)waitForCondition:withTimeout:;
+ (id)sharedInstance;
@end
