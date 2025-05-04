@interface AWEBubbleImageView : UIImageView
@property (nonatomic) Q direction;
@property (nonatomic) {CGPoint=dd} anchorAdjustment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithImage:direction:anchorAdjustment:;
- (id)anchorPositionRelatedToLeftTop;
- (void)redrawStrokeIfNeeded;
- (void)drawStrokeIfNeeded;
- (id)anchorAdjustment;
- (void)setAnchorAdjustment:;
- (id)initWithImage:direction:;
- (unsigned long long)direction;
- (void)setDirection:;
@end
