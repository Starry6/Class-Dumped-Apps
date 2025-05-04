@interface AWEPOIVideoMuteView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView muteIcon;
@property (nonatomic) BOOL isMute;
@property (nonatomic) UIColor contentColor;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) @? stateChange;
- (void)setIsMute:;
- (void)setMuteIcon:;
- (id)muteIcon;
- (void)onClickAction;
- (void)adjustLayout;
- (void)setStateChange:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)contentColor;
- (void)setImageSize:;
- (void)setContentColor:;
- (id)imageSize;
- (void)setupUI;
- (id)stateChange;
- (BOOL)isMute;
@end
