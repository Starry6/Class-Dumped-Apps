@interface SNFallingEdgeSmoother : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithSmoothingDuration:;
- (BOOL)processValue:time:;
+ (id)new;
@end
