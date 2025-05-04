@interface AWEHPTopTabItemIndicatorIconView : UIView
@property (nonatomic) AWEHPTopTabItemIndicatorIconUIModel uiModel;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UIImageView unselectedImageView;
- (id)unselectedImageView;
- (void)updateRotationWithAnimated:;
- (void)updateAlphaWithAnimated:;
- (void)updateUIModel:;
- (void)updateSelectedProgress:animated:;
- (void)setUiModel:;
- (void)setUnselectedImageView:;
- (void)updateTintColor:;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)uiModel;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
