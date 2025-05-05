@interface UIClientRotationContext : NSObject
@property (nonatomic) @ rotatingClient;
@property (nonatomic) UIView contentView;
@property (nonatomic) double duration;
@property (nonatomic) BOOL skipClientRotationCallbacks;
@property (nonatomic) q fromOrientation;
@property (nonatomic) q toOrientation;
- (id)contentView;
- (void)dealloc;
- (double)duration;
- (id)initWithClient:toOrientation:duration:andWindow:;
- (void)_slideHeaderView:andFooterView:offScreen:forInterfaceOrientation:;
- (void)slideHeaderViewAndFooterViewOffScreen:forInterfaceOrientation:;
- (void)_positionHeaderView:andFooterView:outsideContentViewForInterfaceOrientation:;
- (BOOL)_isHeaderTranslucent;
- (BOOL)_isFooterTranslucent;
- (void)setupRotationOrderingKeyboardInAfterRotation:;
- (void)rotateSnapshots;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:;
- (id)rotatingClient;
- (long long)fromOrientation;
- (long long)toOrientation;
- (BOOL)skipClientRotationCallbacks;
- (void)setSkipClientRotationCallbacks:;
@end
