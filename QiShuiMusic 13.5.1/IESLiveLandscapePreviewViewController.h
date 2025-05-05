@interface IESLiveLandscapePreviewViewController : UIViewController
@property (nonatomic) IESLiveSaaSLandscapeVideoPreview landscapeVideoPreview;
@property (nonatomic) IESLiveImageView backgroundImageView;
@property (nonatomic) UILabel userTipLabel;
@property (nonatomic) IESLiveSaaSShareContentModel shareContent;
@property (nonatomic) double landscapePanelWidth;
- (id)attachingDIContext;
- (double)landscapePanelWidth;
- (id)landscapeVideoPreview;
- (double)pictureRatio;
- (void)setLandscapePanelWidth:;
- (void)setLandscapeVideoPreview:;
- (void)setShareContent:;
- (void)setUserTipLabel:;
- (id)shareContent;
- (id)userTipLabel;
- (id)backgroundImageView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;
- (void)setBackgroundImageView:;
- (void)removeFromParent;
- (void)moveToParent:;
@end
