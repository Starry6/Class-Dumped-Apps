@interface IESECGoodsDetailProcessFlowMetaModel : IESECBaseApiModel
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) IESECGoodsDetailProcessFlowBizMeta businessMeta;
- (id)businessMeta;
- (void)setBusinessMeta:;
- (void)setTrackMeta:;
- (id)trackMeta;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
