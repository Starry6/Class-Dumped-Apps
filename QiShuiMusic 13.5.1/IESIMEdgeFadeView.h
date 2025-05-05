@interface IESIMEdgeFadeView : UIView
@property (nonatomic) CAGradientLayer fadeLayer;
@property (nonatomic) q direction;
@property (nonatomic) double value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidFadeValue;
- (id)actionForLayer:forKey:;
- (long long)direction;
- (void)refresh;
- (void)setDirection:;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void)setValue:;
- (void).cxx_destruct;
- (double)value;
- (id)fadeLayer;
+ (id)fadeLayer;
@end
