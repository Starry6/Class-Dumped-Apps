@interface RPTResizeInteraction : NSObject
@property (nonatomic) {CGPoint=dd} dragPoint;
@property (nonatomic) {CGVector=dd} delta;
@property (nonatomic) {CGSize=dd} initialSize;
@property (nonatomic) {CGSize=dd} finalSize;
@property (nonatomic) BOOL shouldLift;
@property (nonatomic) BOOL shouldPress;
@property (nonatomic) RPTCoordinateSpaceConverter conversion;
- (id)delta;
- (id)conversion;
- (BOOL)shouldLift;
- (void)setDelta:;
- (void).cxx_destruct;
- (void)setConversion:;
- (id)initialSize;
- (void)invokeWithComposer:duration:;
- (id)initWithDragPoint:sourceSize:destinationSize:;
- (id)initWithDragPoint:delta:sourceSize:;
- (id)initWithWindow:destinationSize:;
- (id)reversedInteraction;
- (id)interactionByScalingBy:;
- (id)dragPoint;
- (void)setDragPoint:;
- (id)finalSize;
- (void)setShouldLift:;
- (BOOL)shouldPress;
- (void)setShouldPress:;
@end
