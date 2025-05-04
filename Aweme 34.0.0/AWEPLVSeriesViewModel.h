@interface AWEPLVSeriesViewModel : NSObject
@property (nonatomic) AWEPadPMCSeriesCardModel seriesModel;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)sectionViewModel;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setSectionViewModel:;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)seriesModel;
- (void)setSeriesModel:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)trackEvent:withExtraParams:;
- (void)collectButtonDidClicked;
- (void)transferToPlayletDetailView;
- (id)initWithSeriesModel:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:coverRatio:;
- (void)updateFavoriteStatus;
- (void).cxx_destruct;
@end
