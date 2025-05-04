@interface AWELandscapeShareButtonElement : AWELandscapeInteractionBaseElement
@property (nonatomic) UIButton shareButton;
@property (nonatomic) AWELandScapeBottomShareButton numShareButton;
@property (nonatomic) BOOL isShowSharePanel;
- (void)onShareNotification:;
- (id)numShareButton;
- (BOOL)isShowSharePanel;
- (void)setIsShowSharePanel:;
- (void)trackClickShareButton;
- (void)clickShareButton;
- (void)setNumShareButton:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (BOOL)isInteracting;
- (void)setShareButton:;
- (id)shareButton;
@end
