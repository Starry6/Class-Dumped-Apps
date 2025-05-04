@interface AWEStationDataNetworkSection : NSObject
@property (nonatomic) NSMutableArray networkTasks;
@property (nonatomic) AWEStationVideoDetailListDataManager dataController;
@property (nonatomic) NSTimer resultCallBackTimer;
@property (nonatomic) NSTimer releaseTimer;
@property (nonatomic) @? resultBlock;
@property (nonatomic) q expectedMinCursor;
@property (nonatomic) NSString hashTagName;
- (void)setDataController:;
- (id)hashTagName;
- (void)setHashTagName:;
- (id)networkTasks;
- (void)setExpectedMinCursor:;
- (long long)expectedMinCursor;
- (void)startResultTimerWithResultCallback:;
- (void)cancelResultTimer;
- (void)setReleaseTimer:;
- (void)setResultCallBackTimer:;
- (id)resultCallBackTimer;
- (void)setNetworkTasks:;
- (void)setResultBlock:;
- (void)dealloc;
- (id)resultBlock;
- (void).cxx_destruct;
- (void)reset;
- (id)dataController;
- (id)releaseTimer;
@end
