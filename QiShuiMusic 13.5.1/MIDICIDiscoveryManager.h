@interface MIDICIDiscoveryManager : NSObject
@property (nonatomic) @? responseBlock;
- (id)handleNotification:;
- (void)dealloc;
- (void).cxx_destruct;
- (int)setupManager;
- (id)responseBlock;
- (void)setResponseBlock:;
- (void)discoverWithHandler:;
- (int)createClient;
- (void)debugPrintMessage;
- (void)discover;
+ (id)sharedInstance;
@end
