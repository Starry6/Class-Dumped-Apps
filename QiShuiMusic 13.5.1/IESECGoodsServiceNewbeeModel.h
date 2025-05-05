@interface IESECGoodsServiceNewbeeModel : MTLModel
@property (nonatomic) NSString urlNewbee;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSArray services;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrlNewbee:;
- (id)urlNewbee;
- (void)setServices:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)services;
+ (id)servicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
