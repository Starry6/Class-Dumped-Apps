@interface SFBadgeMaskView : UIView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} badgeRect;
@property (nonatomic) CAShapeLayer shapeLayer;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)setBadgeRect:;
- (void)_updateShape;
- (id)badgeRect;
+ (Class)layerClass;
@end
