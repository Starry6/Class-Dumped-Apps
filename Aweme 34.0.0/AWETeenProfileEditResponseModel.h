@interface AWETeenProfileEditResponseModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSNumber toastBack;
@property (nonatomic) NSString verifyType;
- (id)toastBack;
- (void)setToastBack:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (void)setVerifyType:;
- (id)verifyType;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
