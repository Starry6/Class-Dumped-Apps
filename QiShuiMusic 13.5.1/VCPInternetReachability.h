@interface VCPInternetReachability : NSObject
@property (nonatomic) BOOL hasWifiOrEthernetConnection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setReachabilityForFlags:update:;
- (BOOL)hasWifiOrEthernetConnection;
+ (id)sharedInstance;
@end
