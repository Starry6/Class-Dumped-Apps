@interface MKRotationFilter : NSObject
@property (nonatomic) BOOL snappedToNorth;
@property (nonatomic) double additionalSnappingAngle;
@property (nonatomic) <MKRotationFilterDelegate> delegate;
- (id)init;
- (double)additionalSnappingAngle;
- (void)setDelegate:;
- (BOOL)isSnappedToNorth;
- (void)setSnappedToNorth:;
- (void)startRotatingWithFocusPoint:withSnapping:;
- (void)stopRotatingWithFocusPoint:;
- (BOOL)hasAdditionalSnappingAngle;
- (void)updateRotationWithFocusPoint:newValue:;
- (id)delegate;
- (void)setAdditionalSnappingAngle:;
- (void).cxx_destruct;
- (void)updateSnappedToNorth;
- (void)snapToNorthAnimated:forceTrueNorth:;
- (id)initWithMapLayer:;
@end
