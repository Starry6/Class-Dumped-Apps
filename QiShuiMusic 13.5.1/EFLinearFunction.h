@interface EFLinearFunction : NSObject
@property (nonatomic) double slope;
@property (nonatomic) double intercept;
- (double)intercept;
- (double)slope;
- (void)setSlope:;
- (id)initWithSlope:intercept:;
- (id)initWithLineThroughPoints:;
- (double)evaluateX:;
- (double)evaluateReverse:;
- (void)setIntercept:;
@end
