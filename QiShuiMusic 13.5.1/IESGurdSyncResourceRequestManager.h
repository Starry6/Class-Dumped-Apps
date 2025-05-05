@interface IESGurdSyncResourceRequestManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSDate lastCleanDate;
@property (nonatomic) double throttleThreshold;
@property (nonatomic) NSMutableDictionary throttleInfos;
- (void)cleanThrottleInfosWhenNeeded;
- (id)createRequestWithParams:completion:error:;
- (void)setThrottleInfos:;
- (void)setThrottleThreshold:;
- (id)throttleInfos;
- (double)throttleThreshold;
- (id)init;
- (id)lastCleanDate;
- (id)lock;
- (void).cxx_destruct;
- (void)setLastCleanDate:;
- (void)setLock:;
+ (id)sharedInstance;
@end
