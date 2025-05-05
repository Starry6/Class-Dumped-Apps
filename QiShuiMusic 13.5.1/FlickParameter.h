@interface FlickParameter : NSObject
- (id)initFlick:decelerationRate:threshold:oppositeBoundary:positiveBoundary:;
- (void)setContentOffset:destination:;
- (float)delta;
@end
