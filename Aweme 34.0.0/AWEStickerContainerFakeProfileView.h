@interface AWEStickerContainerFakeProfileView : UIView
@property (nonatomic) UIView bottomContainerView;
@property (nonatomic) UIView rightContainerView;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) AWEAnimatedMusicCoverButton musicCoverButton;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL showInPublishPreviewPage;
- (id)rightContainerView;
- (id)musicCoverButton;
- (void)setRightContainerView:;
- (void)updateMusicCoverWithMusicModel:;
- (id)initWithShowInPublishPreviewPage:title:;
- (void)setShowInPublishPreviewPage:;
- (BOOL)showInPublishPreviewPage;
- (double)bottomContainerTopMargin;
- (void)setMusicCoverButton:;
- (id)init;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
- (id)bottomContainerView;
- (void)setBottomContainerView:;
@end
