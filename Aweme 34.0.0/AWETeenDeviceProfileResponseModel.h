@interface AWETeenDeviceProfileResponseModel : AWEBaseApiModel
@property (nonatomic) q age;
@property (nonatomic) q gender;
@property (nonatomic) NSString birthday;
@property (nonatomic) AWETeenAgeScopeModel ageScopeInfo;
- (id)ageScopeInfo;
- (void)setAgeScopeInfo:;
- (id)birthday;
- (void)setGender:;
- (long long)age;
- (long long)gender;
- (void).cxx_destruct;
- (void)setAge:;
- (void)setBirthday:;
+ (id)ageScopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
