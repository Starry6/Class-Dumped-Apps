@interface LynxGestureHandlerTrigger : NSObject
@property (nonatomic) LynxGestureVelocityTracker velocityTracker;
@property (nonatomic) LynxEventHandler eventHandler;
@property (nonatomic) LynxGestureFlingTrigger flinger;
@property (nonatomic) LynxGestureDetectorManager gestureDetectorManager;
@property (nonatomic) LynxGestureArenaManager gestureArenaManager;
@property (nonatomic) <LynxGestureArenaMember> winner;
@property (nonatomic) <LynxGestureArenaMember> lastWinner;
@property (nonatomic) NSSet simultaneousWinners;
@property (nonatomic) NSSet simultaneousGestureIds;
@property (nonatomic) q lastFlingTargetId;
@property (nonatomic) <LynxGestureArenaMember> duplicatedMember;
- (id)flinger;
- (id)velocityTracker;
- (void)dispatchBubble:touchEvent:bubbleCandidate:winner:;
- (void)dispatchUIEventOnCurrentWinner:touches:event:member:touchEvent:flingPoint:;
- (void)dispatchUIEventWithSimultaneous:touches:event:touchEvent:winner:delta:;
- (void)dispatchUIEventWithSimultaneousAndReCompete:touches:event:touchEvent:winner:delta:competeChainCandidates:;
- (id)duplicatedMember;
- (void)failOthersMembersInRaceRelation:currentGestureId:simultaneousGestureIds:;
- (void)findNextWinnerInBegin:touches:event:touchEvent:delta:competeChainCandidates:;
- (id)gestureArenaManager;
- (id)gestureDetectorManager;
- (int)getCurrentMemberState:;
- (id)getGestureHandlerWithMember:gestureId:;
- (void)handleFling:;
- (void)handleGestureDetectorState:gestureId:state:;
- (id)initWithDetectorManager:arenaManager:eventHandler:;
- (long long)lastFlingTargetId;
- (id)lastWinner;
- (id)reCompeteByGestures:current:;
- (void)resetCandidatesGestures:;
- (void)resetGestureHandler:;
- (void)resetGestureHandlerAndSimultaneous:;
- (void)resolveTouchEvent:touches:event:touchEvent:completionChainCandidates:bubbleCandidates:;
- (void)setCurrentWinnerWhenDown:;
- (void)setDuplicatedMember:;
- (void)setFlinger:;
- (void)setGestureArenaManager:;
- (void)setGestureDetectorManager:;
- (void)setLastFlingTargetId:;
- (void)setLastWinner:;
- (void)setSimultaneousGestureIds:;
- (void)setSimultaneousWinners:;
- (void)setVelocityTracker:;
- (void)setWinner:;
- (id)simultaneousGestureIds;
- (id)simultaneousWinners;
- (void)stopFlingByLastFlingMember:bubbleCandidates:competeChainCandidates:touches:event:touchEvent:;
- (void)updateSimultaneousWinner:;
- (id)winner;
- (void)dealloc;
- (void)setEventHandler:;
- (id)eventHandler;
- (void).cxx_destruct;
@end
