@interface AWESchoolInfoModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString country;
@property (nonatomic) NSString province;
@property (nonatomic) NSString city;
- (void)setProvince:;
- (id)province;
- (id)country;
- (id)city;
- (void).cxx_destruct;
- (void)setCity:;
- (void)setCountry:;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
