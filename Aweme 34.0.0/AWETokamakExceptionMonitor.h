@interface AWETokamakExceptionMonitor : NSObject
@property (nonatomic) HMDThreadSafeArray netPathArr;
@property (nonatomic) HMDThreadSafeArray logidArr;
@property (nonatomic) HMDThreadSafeArray netHostJoinPathAndLogidArr;
@property (nonatomic) Q maxCount;
@property (nonatomic) NSArray pathFilterArr;
- (void)receiveNetworkFinishNotification:;
- (void)handleMemoryWarning:;
- (void)startExceptionMonitor;
- (void)setPathFilterArr:;
- (void)registTTNetNotification;
- (void)pathFilter:logid:host:;
- (id)pathFilterArr;
- (void)recordDataWithPathStr:logid:host:;
- (id)logidArr;
- (id)netPathArr;
- (id)netHostJoinPathAndLogidArr;
- (void)reportToHMDCustomContextVal:netpaths:joinedStrArr:;
- (void)setNetPathArr:;
- (void)setLogidArr:;
- (void)setNetHostJoinPathAndLogidArr:;
- (void)setMaxCount:;
- (id)init;
- (unsigned long long)maxCount;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
