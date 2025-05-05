@interface RPTDragInteraction : NSObject
@property (nonatomic) BOOL _locationsAreAlreadyScreenSpace;
@property (nonatomic) {CGPoint=dd} sourceLocation;
@property (nonatomic) {CGPoint=dd} destinationLocation;
@property (nonatomic) RPTCoordinateSpaceConverter conversion;
- (id)conversion;
- (void).cxx_destruct;
- (void)setConversion:;
- (id)destinationLocation;
- (void)setDestinationLocation:;
- (id)sourceLocation;
- (void)invokeWithComposer:duration:;
- (id)reversedInteraction;
- (id)interactionByScalingBy:;
- (id)initByDraggingWindow:byDelta:;
- (id)initFromSourceLocation:toDestinationLocation:;
- (id)_andThenDragBy:;
- (void)setSourceLocation:;
- (BOOL)_locationsAreAlreadyScreenSpace;
- (void)set_locationsAreAlreadyScreenSpace:;
@end
