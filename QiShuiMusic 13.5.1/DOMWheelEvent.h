@interface DOMWheelEvent : DOMMouseEvent
@property (nonatomic) NSInteger wheelDeltaX;
@property (nonatomic) NSInteger wheelDeltaY;
@property (nonatomic) NSInteger wheelDelta;
@property (nonatomic) BOOL isHorizontal;
- (BOOL)isHorizontal;
- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (unsigned int)deltaMode;
- (int)wheelDeltaX;
- (int)wheelDeltaY;
- (int)wheelDelta;
- (BOOL)webkitDirectionInvertedFromDevice;
- (void)initWheelEvent:wheelDeltaY:view:screenX:screenY:clientX:clientY:ctrlKey:altKey:shiftKey:metaKey:;
@end
