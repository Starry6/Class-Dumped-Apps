@interface AWEIMScaleTapGesture : UIGestureRecognizer
@property (nonatomic) {CGPoint=dd} sourcePoint;
@property (nonatomic) double moveCancelDistance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMoveCancelDistance:;
- (double)moveCancelDistance;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)setSourcePoint:;
- (id)sourcePoint;
@end
