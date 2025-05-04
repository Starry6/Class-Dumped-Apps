@interface AWEUserButtonStateMachineHelper : NSObject
@property (nonatomic) NSMutableArray transitions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTransitions:;
- (id)transitions;
- (void).cxx_destruct;
+ (id)setupDefaultFollowTransitions;
+ (id)setupDefaultFollowStates:;
+ (id)sendMessageState:;
+ (id)transitionToSendMsg;
+ (id)lightInteractionState:;
+ (void)updateLightInteractionState:withAvatarView:containerView:;
+ (id)transitionToLiteInteraction;
+ (id)setupDefaultLightInteractionState:;
+ (void)updateLightInteractionState:withUserIDForDisplay:;
+ (BOOL)conditionForSendMsgState:fromState:eventID:;
+ (id)transitionToUnfollow;
+ (id)transitionToFollow;
+ (id)unfollowState:;
+ (id)followedState:;
+ (id)setupDefaultLightInteractionTransitions;
@end
