@interface EAccountLogEntity : NSObject
@property (nonatomic) double beginRequestTime;
@property (nonatomic) double totalTime;
@property (nonatomic) NSString ep;
@property (nonatomic) q rt;
@property (nonatomic) NSString date;
@property (nonatomic) NSString errorParams;
@property (nonatomic) NSString msg;
@property (nonatomic) NSString api;
- (void)setErrorParams:;
- (double)beginRequestTime;
- (id)ep;
- (id)errorParams;
- (long long)rt;
- (void)setBeginRequestTime:;
- (void)setEp:;
- (void)setRt:;
- (double)totalTime;
- (id)init;
- (void)dealloc;
- (id)date;
- (void)setTotalTime:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)api;
- (id)msg;
- (void)setMsg:;
- (void)setApi:;
@end
