@interface AWEUserWorkDynamicLabelView : UIView
@property (nonatomic) UILabel dynamicLabel;
@property (nonatomic) AWEGradientView gradientView;
- (void)setDynamicLabel:;
- (void)configText:;
- (void)configColor:;
- (double)dynamicLabelWidth;
- (id)init;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)updateFontSize:;
- (id)dynamicLabel;
@end
