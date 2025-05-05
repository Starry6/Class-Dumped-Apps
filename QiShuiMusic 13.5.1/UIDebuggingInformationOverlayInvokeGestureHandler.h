@interface UIDebuggingInformationOverlayInvokeGestureHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)_handleActivationGesture:;
+ (id)mainHandler;
@end
