@interface AWEIMSpeedTestUploadVideoBaseStrategy : NSObject
@property (nonatomic) <AWEIMSpeedTestUploadVideoContextProtocol> context;
@property (nonatomic) <AWEIMSpeedTestUploadVideoConfigProtocol> speedTestConfig;
@property (nonatomic) @? resultBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoConfig;
- (id)uploadCustomParameterString;
- (id)customSliceSize;
- (id)customSocketNum;
- (int)customThreshold;
- (id)speedTestConfig;
- (void)setSpeedTestConfig:;
- (void)setResultBlock:;
- (void)close;
- (id)initWithContext:;
- (id)resultBlock;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)stop;
- (void)start;
@end
