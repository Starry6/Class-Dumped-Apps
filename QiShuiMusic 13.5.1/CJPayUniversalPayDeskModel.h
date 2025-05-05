@interface CJPayUniversalPayDeskModel : JSONModel
@property (nonatomic) NSDictionary sdkInfo;
@property (nonatomic) Q service;
@property (nonatomic) Q subWay;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString ext;
@property (nonatomic) UIViewController referVC;
- (id)referVC;
- (id)sdkInfo;
- (void)setExt:;
- (id)refer;
- (void)setRefer:;
- (void)setReferVC:;
- (void)setSdkInfo:;
- (void)setSubWay:;
- (unsigned long long)subWay;
- (void)setService:;
- (unsigned long long)service;
- (void).cxx_destruct;
- (id)ext;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
