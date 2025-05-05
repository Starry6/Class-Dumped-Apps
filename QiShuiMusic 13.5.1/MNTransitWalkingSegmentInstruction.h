@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction
@property (nonatomic) GEOComposedWalkingRouteSegment walkingSegment;
- (void).cxx_destruct;
- (id)instructionSet;
- (id)overridenInstructionsMapping;
- (id)initWithWalkingSegment:context:;
- (id)walkingSegment;
+ (id)instructionForWalkingSegment:context:;
@end
