@interface AWEProfileEditResponseModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) NSNumber toastBack;
@property (nonatomic) NSString verifyType;
@property (nonatomic) NSDictionary dialog;
@property (nonatomic) AWEProfileEditResponseToastBackInfo toastBackInfo;
- (id)toastBack;
- (void)setToastBack:;
- (id)toastBackInfo;
- (void)setToastBackInfo:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (id)dialog;
- (void)setDialog:;
- (void)setVerifyType:;
- (id)verifyType;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
