@interface AWEProgressSectionViewBarController : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView<AWEModernFeedProgressSectionViewProtocol> progressSectionView;
@property (nonatomic) AWEProgressSectionViewContext context;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (void)updatePlayTime:canPlayTime:totalTime:;
- (BOOL)chapterListLegal:;
- (id)progressSectionView;
- (void)videoChapterShowTrack;
- (id)getCommonTrackParams;
- (void)videoChapterClickTrackWithSelectedIndex:currentIndex:;
- (void)setProgressSectionView:;
- (void)setModel:;
- (id)containerView;
- (id)model;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (Class)contextClass;
- (id)bottomBarView;
@end
