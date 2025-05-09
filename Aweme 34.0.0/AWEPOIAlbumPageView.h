@interface AWEPOIAlbumPageView : UIView
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) NSMutableArray pageIndexs;
@property (nonatomic) AWEPOIDetailAlbumScrollView scrollView;
@property (nonatomic) NSMutableDictionary albums;
@property (nonatomic) q currentIndex;
@property (nonatomic) AWEPOIAlbumSelectedStatus selectedStatus;
@property (nonatomic) AWEPOIAlbumDataProcessor dataProcessor;
@property (nonatomic) <IESLLFusePOIDetailNGPageContextProtocol> context;
@property (nonatomic) UIViewController vc;
@property (nonatomic) @? onSelectBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataProcessor;
- (void)setDataProcessor:;
- (void)scrollViewDidEndScroll:;
- (id)logParams;
- (void)setLogParams:;
- (void)enableScroll;
- (void)appendAlbumItemWithCategoryInfo:;
- (id)pageIndexs;
- (long long)currentPageIndex:;
- (void)scrollToIndex:animated:completion:;
- (void)trackShowPOIPicOperationWithPageIndex:;
- (id)onSelectBlock;
- (void)loadDataWithModel:extraParam:dataProcessor:;
- (void)prohibitScroll;
- (void)reloadCurrentAlbum;
- (void)anchorFistAlbumToIndex:;
- (void)setOnSelectBlock:;
- (void)setPageIndexs:;
- (id)selectedStatus;
- (void)setSelectedStatus:;
- (void)updatePageVisible;
- (id)albums;
- (void)setScrollView:;
- (void)setCurrentIndex:;
- (id)initWithFrame:;
- (void)scrollViewWillBeginDecelerating:;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:;
- (void)setContext:;
- (void)didAppear;
- (void).cxx_destruct;
- (void)willDisappear;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (id)context;
- (long long)currentIndex;
- (void)setupUI;
- (id)vc;
- (void)setAlbums:;
- (void)setVc:;
@end
