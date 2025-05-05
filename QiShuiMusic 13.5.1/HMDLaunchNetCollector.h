@interface HMDLaunchNetCollector : NSObject
@property (nonatomic) q launchEndTS;
@property (nonatomic) q launchStartTS;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getLaunchNetSid;
- (void)setLaunchEndTS:;
- (void)asyncHMDHTTPRequestTackerWillCollectedRecord:;
- (long long)launchEndTS;
- (long long)launchStartTS;
- (void)registerRecordCollector;
- (void)setLaunchStartTS:;
- (void)unregisterRecordCollector;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
@end
