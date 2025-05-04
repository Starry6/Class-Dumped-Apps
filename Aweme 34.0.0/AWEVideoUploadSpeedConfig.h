@interface AWEVideoUploadSpeedConfig : NSObject
@property (nonatomic) NSString context;
@property (nonatomic) q speed;
@property (nonatomic) q threshold;
- (long long)threshold;
- (void)setSpeed:;
- (long long)speed;
- (void)setThreshold:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (id)configWithProbeManager:speedModel:fileMode:;
@end
