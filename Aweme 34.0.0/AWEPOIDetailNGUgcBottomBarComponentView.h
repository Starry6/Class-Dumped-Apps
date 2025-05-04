@interface AWEPOIDetailNGUgcBottomBarComponentView : DitoComponentView
@property (nonatomic) AWEPOIDetailNGUgcBottomBarComponentViewModel vm;
@property (nonatomic) BOOL isShow;
@property (nonatomic) AWEPOIUgcBottomBarView ugcBottomBar;
- (BOOL)isShow;
- (void)setIsShow:;
- (void)updateViewModel:;
- (void)bindActionAndState;
- (id)vm;
- (void)setVm:;
- (id)ugcBottomBar;
- (void)setUgcBottomBar:;
- (id)ugcBarFrame;
- (void)onUgcBottomBarCommentClicked:;
- (void)onUgcBottomBarRecordClicked:;
- (void)onUgcBottomBarUploadImgClicked:;
- (void)showAnimationWithCompletion:;
- (void)sendAppearEvent;
- (void)hiddenAnimationWithCompletion:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
