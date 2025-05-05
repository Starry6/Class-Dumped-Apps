@interface UIKeyboardCameraBasePresentationController : UIPresentationController
@property (nonatomic) BOOL updatesGuideDuringRotation;
@property (nonatomic) BOOL presentingOverKeyboard;
- (BOOL)updatesGuideDuringRotation;
- (void)postNotificationsForType:from:to:forStart:;
- (void)postNotificationsForType:forStart:;
- (BOOL)presentingOverKeyboard;
- (void)setPresentingOverKeyboard:;
@end
