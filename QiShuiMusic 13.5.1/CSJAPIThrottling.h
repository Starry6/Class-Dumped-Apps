@interface CSJAPIThrottling : NSObject
@property (nonatomic) double beginTime;
@property (nonatomic) double lastRequest;
@property (nonatomic) q times;
@property (nonatomic) BOOL isThrottling;
@property (nonatomic) BOOL report;
@property (nonatomic) CSJAPIThrottlingConfiguration configuration;
@property (nonatomic) BOOL enable;
- (BOOL)canMake;
- (void)setLastRequest:;
- (BOOL)isThrottling;
- (double)lastRequest;
- (void)reportAPIStat:;
- (void)reportTracker;
- (void)setIsThrottling:;
- (BOOL)enable;
- (double)beginTime;
- (void)setReport:;
- (void)setConfiguration:;
- (void)setBeginTime:;
- (id)configuration;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)initWithConfiguration:;
- (BOOL)report;
- (long long)times;
- (void)setTimes:;
@end
