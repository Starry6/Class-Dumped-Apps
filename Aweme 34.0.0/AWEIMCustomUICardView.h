@interface AWEIMCustomUICardView : AWEIMGeneralCardView
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) UIImageView customBGImageView;
- (void)p_initCustomSubViews;
- (void)p_customConstraintSubViews;
- (void)setCustomBGImageView:;
- (id)customBGImageView;
- (void)updateGeneralCardCustomUIWithDict:;
- (id)gradientView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setGradientView:;
@end
