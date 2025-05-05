@interface CSJDynamicSlideDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) CSJDynamicClickInfo clickInfo;
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) {CGPoint=dd} beginPoint;
- (id)beginPoint;
- (id)clickInfo;
- (void)panAction:;
- (void)pbu_directionJump:beginPoint:;
- (void)setBeginPoint:;
- (void)setClickInfo:;
- (long long)triggerSlideDirection;
- (long long)triggerSlideMinDistance;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:;
- (void).cxx_destruct;
- (void)render;
@end
