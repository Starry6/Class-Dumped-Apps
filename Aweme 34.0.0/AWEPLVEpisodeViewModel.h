@interface AWEPLVEpisodeViewModel : NSObject
@property (nonatomic) AWEPadPMCEpisodeCardModel episodeModel;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)sectionViewModel;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setSectionViewModel:;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (void)setEpisodeModel:;
- (id)episodeModel;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)trackEvent:withExtraParams:;
- (void)collectButtonDidClicked;
- (void)transferToFormatPlayerRoom;
- (id)initWithEpisodeModel:;
- (void)updateFavoriteStatus;
- (void).cxx_destruct;
@end
