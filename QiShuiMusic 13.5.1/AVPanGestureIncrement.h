@interface AVPanGestureIncrement : NSObject
@property (nonatomic) {CGPoint=dd} translation;
@property (nonatomic) {CGPoint=dd} velocity;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasMultipleTouches;
- (id)velocity;
- (id)debugDescription;
- (double)timestamp;
- (id)translation;
- (BOOL)hasMultipleTouches;
+ (id)gestureIncrementWithTranslation:velocity:timestamp:hasMultipleTouches:;
@end
