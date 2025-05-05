@interface IESECGoodsDetailShopMetaModel : MTLModel
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) IESECGoodsDetailShopBusinessMetaModel businessMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessMeta;
- (void)setBusinessMeta:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
