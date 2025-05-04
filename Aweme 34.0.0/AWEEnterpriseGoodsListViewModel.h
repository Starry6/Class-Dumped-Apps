@interface AWEEnterpriseGoodsListViewModel : AWEEnterpriseIMMessageCardBaseViewModel
@property (nonatomic) q showStatus;
@property (nonatomic) NSMutableArray goodsDataList;
@property (nonatomic) NSArray goodsRequestData;
@property (nonatomic) AWEEnterpriseGoodsDetailDataController detailDataController;
- (void)configDataWithContent:ext:localExt:;
- (void)updateWithModel:needRequestData:;
- (long long)numberOfGoodsItem;
- (id)goodsDetailData;
- (void)transferToDetailPageWithIndex:;
- (void)setGoodsDataList:;
- (void)setShowStatus:;
- (void)p_requestGoodsDetail;
- (id)convertDictToModel:;
- (void)setDetailDataController:;
- (id)goodsDataList;
- (id)detailDataController;
- (void)setGoodsRequestData:;
- (void)p_updateGoodsDetail;
- (id)goodsRequestData;
- (long long)showStatus;
- (id)contentSize;
- (void).cxx_destruct;
@end
