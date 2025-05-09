@interface AWEHotSearchCommentFeedNewHeaderView : UIView
@property (nonatomic) UIView topContainerView;
@property (nonatomic) AWEHotSearchCommentBackgroundView backgroundView;
@property (nonatomic) UIView bottomContainerView;
@property (nonatomic) AWEHotSearchCommentTitleView titleView;
@property (nonatomic) AWEHotSearchCommentDiscussView discussView;
@property (nonatomic) AWEHotSearchCommentDetailView detailView;
@property (nonatomic) UIView horizontalSeparationLine;
@property (nonatomic) UIView navigationSeparationLine;
@property (nonatomic) AWEHotSearchCommentSlidingTab slidingTabBar;
@property (nonatomic) BOOL hiddenDiscuss;
@property (nonatomic) BOOL hiddenDetail;
@property (nonatomic) @? tapDetailBlock;
@property (nonatomic) @? tapTitleBlock;
- (void)updateAlpha:;
- (id)slidingTabBar;
- (void)setSlidingTabBar:;
- (void)makeConstraint;
- (id)tapTitleBlock;
- (double)getCriticalOffset;
- (void)setTapTitleBlock:;
- (void)updateToEmptyPageState:;
- (void)configWithContext:;
- (id)getSlidingTabbarView;
- (void)updateSeparationLine:;
- (void)setTapDetailBlock:;
- (id)topContainerView;
- (id)discussView;
- (id)horizontalSeparationLine;
- (id)navigationSeparationLine;
- (void)setHiddenDetail:;
- (void)setHiddenDiscuss:;
- (id)tapDetailBlock;
- (void)tapTitleView;
- (void)tapDetailView;
- (void)setTopContainerView:;
- (void)setDiscussView:;
- (void)setHorizontalSeparationLine:;
- (void)setNavigationSeparationLine:;
- (BOOL)hiddenDiscuss;
- (BOOL)hiddenDetail;
- (id)titleView;
- (void)setTitleView:;
- (id)init;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setupUI;
- (id)detailView;
- (void)setDetailView:;
- (void)updateWithContext:;
- (id)bottomContainerView;
- (void)setBottomContainerView:;
@end
