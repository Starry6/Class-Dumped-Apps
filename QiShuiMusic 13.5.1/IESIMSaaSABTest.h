@interface IESIMSaaSABTest : NSObject
@property (nonatomic) BOOL isSecurityCompliance;
@property (nonatomic) BOOL isMessage2TabEnable;
- (BOOL)isMessage2TabEnable;
- (BOOL)isSecurityCompliance;
- (void)setIsMessage2TabEnable:;
- (void)setIsSecurityCompliance:;
- (id)init;
@end
