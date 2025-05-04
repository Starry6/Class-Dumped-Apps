@interface AWEEditGradientView : AWEStudioExcludeSelfView
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)initWithFrame:topColor:bottomColor:;
- (id)initLeftTop2RightBottomWithColors:;
- (id)gradientLayer;
+ (Class)layerClass;
@end
