@interface UIKeyboardDockItemButton : UIButton
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} tapActionRegion;
@property (nonatomic) NSString identifier;
@property (nonatomic) CAShapeLayer shapeLayer;
- (void)setupDictationAnimationButtonIfNeeded;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)identifier;
- (id)titleRectForContentRect:;
- (void)addAnimatitionIfNeeded;
- (id)rectWithSize:forContentRect:withAlignmentRectInsets:;
- (id)imageRectForContentRect:;
- (id)shapeLayer;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (void)setTintColor:;
- (void)updateFillColor;
- (id)tapActionRegion;
- (void)setIdentifier:;
- (void)setTapActionRegion:;
@end
