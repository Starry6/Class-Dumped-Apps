@interface AVPresentationContextTransition : NSObject
@property (nonatomic) BOOL wasInitiallyInteractive;
@property (nonatomic) BOOL hasAVKitAnimator;
@property (nonatomic) BOOL wasCancelledWithInactiveScene;
@property (nonatomic) Q presenterSupportedOrientations;
@property (nonatomic) q initialInterfaceOrientation;
@property (nonatomic) q finalInterfaceOrientation;
@property (nonatomic) BOOL isRotated;
@property (nonatomic) q interfaceRotation;
@property (nonatomic) {CGAffineTransform=dddddd} rotationTransform;
@property (nonatomic) {CGAffineTransform=dddddd} counterRotationTransform;
- (long long)initialInterfaceOrientation;
- (void)setInitialInterfaceOrientation:;
- (BOOL)isRotated;
- (BOOL)wasInitiallyInteractive;
- (id)rotationTransform;
- (id)counterRotationTransform;
- (long long)interfaceRotation;
- (BOOL)presenterSupportsOrientation:;
- (void)setWasInitiallyInteractive:;
- (BOOL)hasAVKitAnimator;
- (void)setHasAVKitAnimator:;
- (BOOL)wasCancelledWithInactiveScene;
- (void)setWasCancelledWithInactiveScene:;
- (unsigned long long)presenterSupportedOrientations;
- (void)setPresenterSupportedOrientations:;
- (long long)finalInterfaceOrientation;
- (void)setFinalInterfaceOrientation:;
@end
