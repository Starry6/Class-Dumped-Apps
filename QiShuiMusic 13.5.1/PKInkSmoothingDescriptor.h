@interface PKInkSmoothingDescriptor : NSObject
@property (nonatomic) double stylusSmoothing;
@property (nonatomic) double touchSmoothing;
@property (nonatomic) double velocitySmoothing;
@property (nonatomic) double angleSmoothing;
@property (nonatomic) double radiusSmoothing;
- (id)mutableCopy;
- (id)initWithStylusSmoothing:touch:velocity:angle:radius:;
- (double)stylusSmoothing;
- (double)touchSmoothing;
- (double)velocitySmoothing;
- (double)angleSmoothing;
- (double)radiusSmoothing;
@end
