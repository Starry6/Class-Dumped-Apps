@interface AWEPOIHeaderImageCell : AWEPOIHeaderBaseCell
@property (nonatomic) UIImageView cellImageView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIVisualEffectView bgMaskView;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)updateHeight:isMaxUnfold:duration:;
- (void)updateHeight:isMaxUnfold:;
- (id)cellImageView;
- (void)setCellImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateData:completion:;
- (void)updateMask;
- (void)setupViews;
- (void)setBgImageView:;
- (id)bgImageView;
@end
