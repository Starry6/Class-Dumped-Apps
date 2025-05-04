@interface AWEPlayInteractionProgressSectionElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEModernFeedProgressSectionViewProtocol> progressSectionView;
@property (nonatomic) double playTime;
- (void)p_initUI;
- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)setPlayTime:;
- (BOOL)chapterListLegal:;
- (id)progressSectionView;
- (void)videoChapterShowTrack;
- (id)getCommonTrackParams;
- (void)videoChapterClickTrackWithSelectedIndex:currentIndex:;
- (BOOL)currentPlayerHasSectionInfo;
- (void)updateProgressSectionViewWithPlayTime:;
- (void)p_updateModel;
- (void)setProgressSectionView:;
- (void)viewDidLoad;
- (double)playTime;
- (void).cxx_destruct;
- (void)reset;
@end
