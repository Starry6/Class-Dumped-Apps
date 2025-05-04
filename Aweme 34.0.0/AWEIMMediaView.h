@interface AWEIMMediaView : UIView
@property (nonatomic) AWEIMRefreshImageView coverImageView;
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) @? tapActionBlock;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)p_setup;
- (id)playIcon;
- (void)setPlayIcon:;
- (void)p_configAccessibility:;
- (void)p_configImageView:;
- (void)p_configPlayIcon:;
- (void)p_didTappedCover;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
@end
