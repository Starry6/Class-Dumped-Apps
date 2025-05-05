@interface PKFakeTapToFocusDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (id)_scribbleInteraction:frameForElement:;
- (void)_scribbleInteraction:requestElementsInRect:completion:;
- (void)_scribbleInteraction:focusElement:initialFocusSelectionReferencePoint:completion:;
- (void).cxx_destruct;
- (BOOL)_scribbleInteraction:shouldBeginAtLocation:;
- (BOOL)_scribbleInteractionIsEnabled:;
- (BOOL)_scribbleInteraction:focusWillTransformElement:;
- (void)_scribbleInteraction:didTargetElement:forTouches:event:;
- (BOOL)_shouldFocusBeforeObservingWithFocusInfo:;
- (void)_focusWithFocusInfo:;
- (void)_waitForFirstResponderChangeWithFocusInfo:completion:;
+ (id)_infoInProcess;
+ (BOOL)_shouldAttachForView:;
+ (id)_tapGestureForView:;
+ (BOOL)isPossibleForView:focusInfo:;
@end
