@interface SATurnstileInfoWithPortLabel : SATurnstileInfo
@property (nonatomic) NSString portName;
@property (nonatomic) Q portFlags;
@property (nonatomic) Q portDomain;
- (void)setPortName:;
- (id)portName;
- (void).cxx_destruct;
- (unsigned long long)portFlags;
- (unsigned long long)portDomain;
- (void)setPortFlags:;
- (void)setPortDomain:;
- (id)initWithKCDataTurnstileInfo:;
@end
