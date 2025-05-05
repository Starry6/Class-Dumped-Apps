@interface IESIMSaaSAWEProfileEditResponseModel : IESIMBaseApiModel
@property (nonatomic) IESIMUserModel user;
@property (nonatomic) NSNumber toastBack;
@property (nonatomic) NSString verifyType;
- (void)setToastBack:;
- (id)toastBack;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
- (id)verifyType;
- (void)setVerifyType:;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
