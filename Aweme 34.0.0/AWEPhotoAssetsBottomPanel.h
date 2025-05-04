@interface AWEPhotoAssetsBottomPanel : UIView
@property (nonatomic) UIView toolbarBgView;
@property (nonatomic) ACCAnimatedButton closeButton;
@property (nonatomic) ACCAnimatedButton okButton;
@property (nonatomic) UILabel bottomInfoLabel;
@property (nonatomic) @? okCallback;
@property (nonatomic) @? closeCallback;
- (void)onCloseAction:;
- (void)setCloseCallback:;
- (id)closeCallback;
- (void)setOkCallback:;
- (void)setToolbarBgView:;
- (void)setBottomInfoLabel:;
- (void)onOkAction:;
- (id)bottomInfoLabel;
- (id)toolbarBgView;
- (id)okCallback;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setOkButton:;
- (id)okButton;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
