@interface AWETeenProfileResponseModel : AWEBaseApiModel
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q age;
- (id)user;
- (void)setUser:;
- (long long)age;
- (void).cxx_destruct;
- (void)setAge:;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
