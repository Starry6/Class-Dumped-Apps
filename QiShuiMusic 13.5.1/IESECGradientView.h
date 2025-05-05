@interface IESECGradientView : UIView
@property (nonatomic) IESECLinearGradientLayer gradientLayer;
- (id)gradientLayer;
- (id)initWithFrame:;
+ (Class)layerClass;
@end
