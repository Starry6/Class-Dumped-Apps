@interface AWEBubbleImageView : UIImageView
@property (nonatomic) Q direction;
@property (nonatomic) {CGPoint=dd} anchorAdjustment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorAdjustment;
- (id)anchorPositionRelatedToLeftTop;
- (void)drawStrokeIfNeeded;
- (id)initWithImage:direction:;
- (id)initWithImage:direction:anchorAdjustment:;
- (void)redrawStrokeIfNeeded;
- (void)setAnchorAdjustment:;
- (unsigned long long)direction;
- (void)setDirection:;
@end
