@interface AWEIMConversationTransationComponent : AWEIMComponentBase
@property (nonatomic) Q slideDirection;
@property (nonatomic) BOOL shouldTrackEnterUserProfile;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)setSlideDirection:;
- (unsigned long long)slideDirection;
- (unsigned long long)conversation_transition_destinatedType;
- (id)conversation_transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (void)conversation_transition_didStartTransitionWithContext:;
- (void)conversation_transition_didCancelPercentDrivenTransitionWithContext:;
- (void)conversation_transition_didPopDoneTransitionWithContext:;
- (void)conversation_viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)conversation_transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)setShouldTrackEnterUserProfile:;
- (BOOL)shouldTrackEnterUserProfile;
+ (BOOL)canCreateComponentWithContext:;
@end
