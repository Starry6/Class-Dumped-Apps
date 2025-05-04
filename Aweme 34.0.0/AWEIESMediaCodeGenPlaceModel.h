@interface AWEIESMediaCodeGenPlaceModel : AWEBaseDataModel
@property (nonatomic) NSString adminArea;
@property (nonatomic) NSString locality;
@property (nonatomic) NSString subLocality;
- (id)adminArea;
- (void)setAdminArea:;
- (id)locality;
- (id)subLocality;
- (void).cxx_destruct;
- (void)setLocality:;
- (void)setSubLocality:;
+ (id)JSONKeyPathsByPropertyKey;
@end
