@interface AWEIMSpeedTestUploadVideoStrategy : AWEIMSpeedTestUploadVideoBaseStrategy
@property (nonatomic) BDFileSpeedTestClient speedTestClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoConfig;
- (void)uploadVideo:speed:videoContext:error:;
- (long long)speedTestGetNetState:;
- (void)setSpeedTestClient:;
- (id)speedTestClient;
- (id)customSliceSize;
- (id)customSocketNum;
- (int)customThreshold;
- (id)speedTestConfig;
- (void)createSpeedTestUploadVideoClient;
- (void)setResultBlock:;
- (void)close;
- (id)initWithContext:;
- (id)resultBlock;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
@end
