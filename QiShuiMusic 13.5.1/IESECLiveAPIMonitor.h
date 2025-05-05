@interface IESECLiveAPIMonitor : NSObject
@property (nonatomic) IESECLiveTracker tracker;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECHybridParamsVerifyHelper verifyHelper;
@property (nonatomic) BOOL verifyHelperLoaded;
- (void)reportRequestWithRequestResult:;
- (void)setLiveContext:;
- (void)excuteVerifyCheckWithParamsArray:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (void)setVerifyHelper:;
- (void)setVerifyHelperLoaded:;
- (void)setupVerifyHelper;
- (id)verifyHelper;
- (BOOL)verifyHelperLoaded;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
+ (id)monitorParamsFormat:;
+ (id)monitorParamsFormat:requestResult:;
@end
