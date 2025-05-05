@interface SAWaitInfoWithPortLabel : SAWaitInfo
@property (nonatomic) NSString portName;
@property (nonatomic) Q portFlags;
@property (nonatomic) Q portDomain;
- (void)setPortName:;
- (id)portName;
- (void).cxx_destruct;
- (unsigned long long)portFlags;
- (unsigned long long)portDomain;
- (id)initWithKCDataWaitInfo:;
- (void)setPortFlags:;
- (void)setPortDomain:;
@end
