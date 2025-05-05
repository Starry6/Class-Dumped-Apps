@interface HMDNetworkTrafficCollector : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncHMDHTTPRequestTackerDidCollectedRecord:;
- (void)registerRecordCollector;
- (void)unregisterRecordCollector;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
+ (id)sharedInstance;
@end
