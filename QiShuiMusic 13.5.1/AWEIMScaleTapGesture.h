@interface AWEIMScaleTapGesture : UIGestureRecognizer
@property (nonatomic) {CGPoint=dd} sourcePoint;
@property (nonatomic) double moveCancelDistance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)moveCancelDistance;
- (void)setMoveCancelDistance:;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)sourcePoint;
- (void)setSourcePoint:;
@end
