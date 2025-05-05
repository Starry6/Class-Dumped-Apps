@interface TTObservation : NSObject
@property (nonatomic) Q tcpRtt;
@property (nonatomic) Q httpRtt;
@property (nonatomic) q netQualityType;
@property (nonatomic) q realNetSpeed;
@property (nonatomic) Q checkResult;
@property (nonatomic) q throttleSpeed;
- (unsigned long long)httpRtt;
- (void)setCheckResult:;
- (unsigned long long)checkResult;
- (long long)netQualityType;
- (long long)realNetSpeed;
- (void)setHttpRtt:;
- (void)setNetQualityType:;
- (void)setRealNetSpeed:;
- (void)setTcpRtt:;
- (void)setThrottleSpeed:;
- (unsigned long long)tcpRtt;
- (long long)throttleSpeed;
@end
