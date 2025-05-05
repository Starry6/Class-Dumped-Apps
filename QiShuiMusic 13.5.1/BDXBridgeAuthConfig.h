@interface BDXBridgeAuthConfig : NSObject
@property (nonatomic) NSArray jsonObjs;
@property (nonatomic) q from;
@property (nonatomic) double timerInterval;
- (id)initWithJsonObjs:from:;
- (id)jsonObjs;
- (void)setJsonObjs:;
- (double)timerInterval;
- (void).cxx_destruct;
- (long long)from;
- (void)setFrom:;
- (void)setTimerInterval:;
@end
