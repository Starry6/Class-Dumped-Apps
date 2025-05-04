@interface AWECustomPhotoStickerEditIconView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIImageView iconCircle;
@property (nonatomic) UILabel iconLabel;
@property (nonatomic) BOOL isChosen;
- (void)setIconCircle:;
- (void)setIsChosen:;
- (id)iconCircle;
- (BOOL)isChosen;
- (void)setUpIconViewWithIconImage:circleImage:labelText:fontWeight:;
- (void)changeIconImage:;
- (void)changeAlpha;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)iconLabel;
- (void)setIconLabel:;
@end
