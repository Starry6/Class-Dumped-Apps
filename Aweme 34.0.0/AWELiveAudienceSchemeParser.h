@interface AWELiveAudienceSchemeParser : NSObject
@property (nonatomic) AWELiveAudienceGoodsDetailSchemeModel goodsDetailModel;
@property (nonatomic) AWELiveAudienceShelfTrackerSchemeModel shelfTrackerModel;
@property (nonatomic) AWELiveAudienceShelfOpenParamsSchemeModel shelfOpenParamsModel;
@property (nonatomic) AWELiveAudienceGoodsDetailMPSchemeModel goodsDetailMPModel;
@property (nonatomic) BOOL autoOpenLiveLifeShelf;
@property (nonatomic) NSString saleChannel;
@property (nonatomic) AWELiveAudienceAnchorItemParamsSchemeModel anchorItemParamsModel;
@property (nonatomic) BOOL hasOpenedDetail;
- (id)initWithLLomParams:;
- (BOOL)hasOpenedDetail;
- (void)setHasOpenedDetail:;
- (id)goodsDetailModel;
- (id)goodsDetailMPModel;
- (BOOL)autoOpenLiveLifeShelf;
- (void)setAutoOpenLiveLifeShelf:;
- (id)saleChannel;
- (id)shelfTrackerModel;
- (id)shelfOpenParamsModel;
- (id)anchorItemParamsModel;
- (void)setSaleChannel:;
- (void)p_parseParams:;
- (void)setGoodsDetailModel:;
- (void)setShelfTrackerModel:;
- (void)setShelfOpenParamsModel:;
- (void)setGoodsDetailMPModel:;
- (void)setAnchorItemParamsModel:;
- (void).cxx_destruct;
@end
