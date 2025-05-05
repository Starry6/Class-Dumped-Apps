@interface IESIMDragDismissViewControllerProtocol_IESProtocolContainer : NSObject
@property (nonatomic) UIView baseView;
@property (nonatomic) UIPanGestureRecognizer dismissPanGesture;
@property (nonatomic) UITapGestureRecognizer dismissTapGesture;
@property (nonatomic) {CGPoint=dd} lastDismissPanGestureLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dismissPanGesture;
- (id)dismissTapGesture;
- (id)ies_conflictScrollView;
- (void)ies_handleDismissPanGesture:;
- (void)ies_handleDismissTapGesture:;
- (void)ies_setupDismissGesture;
- (id)lastDismissPanGestureLocation;
- (void)performDismissAnimated:;
- (void)setDismissPanGesture:;
- (void)setDismissTapGesture:;
- (void)setIes_conflictScrollView:;
- (void)setLastDismissPanGestureLocation:;
- (void)showOnView:initialLayoutBlock:targetLayoutBlock:animated:;
- (void)dismissAnimated:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)baseView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setBaseView:;
@end
