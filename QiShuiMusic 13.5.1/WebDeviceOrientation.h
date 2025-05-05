@interface WebDeviceOrientation : NSObject
- (void)dealloc;
- (id)initWithCoreDeviceOrientation:;
- (id)initWithCanProvideAlpha:alpha:canProvideBeta:beta:canProvideGamma:gamma:;
@end
