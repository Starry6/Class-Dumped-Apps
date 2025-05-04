@interface AWETeenDeviceProfileEditResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber age;
@property (nonatomic) q gender;
@property (nonatomic) NSString birthday;
@property (nonatomic) NSString verifyType;
@property (nonatomic) AWETeenAgeScopeModel ageScopeInfo;
- (id)ageScopeInfo;
- (void)setAgeScopeInfo:;
- (id)birthday;
- (void)setGender:;
- (id)age;
- (long long)gender;
- (void).cxx_destruct;
- (void)setAge:;
- (void)setBirthday:;
- (void)setVerifyType:;
- (id)verifyType;
+ (id)ageScopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
