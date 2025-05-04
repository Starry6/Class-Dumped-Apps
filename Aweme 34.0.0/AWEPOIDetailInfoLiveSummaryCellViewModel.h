@interface AWEPOIDetailInfoLiveSummaryCellViewModel : AWEPOIDetailInfoSeparatorViewModel
@property (nonatomic) AWEPOIDetailResponse poiDetail;
@property (nonatomic) AWEPOIDetailSummaryView summaryView;
@property (nonatomic) AWEPOIDetailStore store;
@property (nonatomic) BOOL shouldNotifyViewReady;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupViewModel;
- (id)poiDetail;
- (void)setPoiDetail:;
- (void)poi_onAppear;
- (void)setShouldNotifyViewReady:;
- (BOOL)shouldNotifyViewReady;
- (void)handleCollect;
- (void)summaryViewDidTapOnCollectButton:;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)summaryView;
- (void)setSummaryView:;
+ (double)preferredHeightForDataModel:width:margin:padding:cellIdentifier:;
+ (unsigned int)functionsWithScene:;
@end
