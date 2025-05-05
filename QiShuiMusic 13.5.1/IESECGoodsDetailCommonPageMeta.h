@interface IESECGoodsDetailCommonPageMeta : MTLModel
@property (nonatomic) IESECGoodsDetailCommonMeta commonMeta;
@property (nonatomic) NSDictionary shareMeta;
@property (nonatomic) NSDictionary trackMeta;
@property (nonatomic) NSDictionary serverMonitorMeta;
@property (nonatomic) IESECGoodsDetailSkuMeta skuMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skuMeta;
- (id)commonMeta;
- (id)serverMonitorMeta;
- (void)setCommonMeta:;
- (void)setServerMonitorMeta:;
- (void)setShareMeta:;
- (void)setSkuMeta:;
- (void)setTrackMeta:;
- (id)shareMeta;
- (id)trackMeta;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
