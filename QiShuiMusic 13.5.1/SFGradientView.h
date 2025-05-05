@interface SFGradientView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)gradientLayer;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (BOOL)_shouldAnimatePropertyWithKey:;
- (id)initWithColors:locations:;
+ (Class)layerClass;
+ (id)standardGaussianGradientView;
@end
