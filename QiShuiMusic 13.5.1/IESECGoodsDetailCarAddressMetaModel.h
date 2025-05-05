@interface IESECGoodsDetailCarAddressMetaModel : IESECBaseApiModel
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) IESECGoodsDetailCarAddressBizMeta businessMeta;
- (id)businessMeta;
- (void)setBusinessMeta:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
