@interface AWELiveAudienceShelfOpenParamsSchemeModel : NSObject
@property (nonatomic) NSString anchorProductId;
@property (nonatomic) AWELiveAudienceGoodsDetailSchemeModel goodsDetail;
@property (nonatomic) AWELiveAudienceGoodsDetailMPSchemeModel goodsDetailMp;
- (void)setGoodsDetail:;
- (id)goodsDetail;
- (id)anchorProductId;
- (void)setAnchorProductId:;
- (void)p_parseParams:;
- (void)setGoodsDetailMp:;
- (id)goodsDetailMp;
- (void).cxx_destruct;
- (id)initWithDict:;
@end
