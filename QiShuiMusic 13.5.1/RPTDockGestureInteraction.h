@interface RPTDockGestureInteraction : NSObject
@property (nonatomic) Q gestureStyle;
@property (nonatomic) double amplitude;
- (void)setAmplitude:;
- (double)amplitude;
- (void)invokeWithComposer:duration:;
- (id)reversedInteraction;
- (id)interactionByScalingBy:;
- (id)initWithGestureStyle:;
- (unsigned long long)gestureStyle;
- (void)setGestureStyle:;
@end
