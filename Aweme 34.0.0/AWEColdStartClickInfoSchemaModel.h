@interface AWEColdStartClickInfoSchemaModel : AWEBaseApiModel
@property (nonatomic) NSString query_schema;
@property (nonatomic) NSString client_extra;
@property (nonatomic) NSString guide_reference;
@property (nonatomic) NSString isAdUser;
@property (nonatomic) NSString isHitAb;
@property (nonatomic) NSString isLandingTime;
@property (nonatomic) NSString materialClickTime;
- (id)query_schema;
- (void)setQuery_schema:;
- (id)client_extra;
- (id)guide_reference;
- (void)setGuide_reference:;
- (id)isAdUser;
- (void)setIsAdUser:;
- (id)isHitAb;
- (void)setIsHitAb:;
- (id)isLandingTime;
- (void)setIsLandingTime:;
- (id)materialClickTime;
- (void)setMaterialClickTime:;
- (void)setClient_extra:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
