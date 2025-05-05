@interface UIScrollViewKnobLongPressGestureRecognizer : UILongPressGestureRecognizer
@property (nonatomic) BOOL forPointer;
- (BOOL)_shouldReceiveTouch:withEvent:;
- (BOOL)_isGestureType:;
- (BOOL)forPointer;
- (void)setForPointer:;
- (id)initWithTarget:action:;
@end
