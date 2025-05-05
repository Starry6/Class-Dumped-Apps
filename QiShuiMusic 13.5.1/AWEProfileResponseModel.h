@interface AWEProfileResponseModel : IESIMBaseApiModel
@property (nonatomic) IESIMUserModel user;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
