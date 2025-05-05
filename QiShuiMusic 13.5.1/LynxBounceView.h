@interface LynxBounceView : LynxUIView
@property (nonatomic) Q direction;
@property (nonatomic) float space;
@property (nonatomic) double triggerBounceEventDistance;
- (void)direction:requestReset:;
- (void)setTriggerBounceEventDistance:;
- (void)setTriggerBounceEventDistance:requestReset:;
- (double)triggerBounceEventDistance;
- (unsigned long long)direction;
- (id)init;
- (void)setDirection:;
- (float)space;
- (void)setSpace:;
+ (id)__lynx_prop_config__251;
+ (id)__lynx_prop_config__372;
+ (void)lynxLazyLoad;
@end
