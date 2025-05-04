@interface AWEAssetsCropPlayerControlView : UIView
@property (nonatomic) UIImageView playImageView;
@property (nonatomic) @? tapAction;
@property (nonatomic) BOOL enablePauseIcon;
- (void)onTapAction:;
- (void)showPauseWithAnimated:;
- (void)hidePauseWithAnimated:;
- (void)setEnablePauseIcon:;
- (BOOL)enablePauseIcon;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tapAction;
- (id)playImageView;
- (void)setPlayImageView:;
- (void)setTapAction:;
@end
