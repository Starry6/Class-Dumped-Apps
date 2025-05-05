@interface HMDTTMonitorCounter : NSObject
@property (nonatomic) BOOL isRunning;
@property (nonatomic) NSString appID;
- (long long)generateUniqueCode;
- (id)initCounterWithAppID:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (long long)generateSequenceNumber;
+ (id)infoPathWithAppID:;
@end
