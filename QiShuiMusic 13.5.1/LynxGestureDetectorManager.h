@interface LynxGestureDetectorManager : NSObject
@property (nonatomic) NSMutableDictionary gestureToArenaMembers;
@property (nonatomic) LynxGestureArenaManager arenaManager;
- (void)registerGestureId:withMemberId:;
- (id)arenaManager;
- (id)convertResponseChainToCompeteChain:;
- (id)findCandidatesAfterCurrentInChain:current:members:;
- (id)findCandidatesFromArenaMember:gestureToArenaMembers:arenaMembers:;
- (id)gestureToArenaMembers;
- (id)handleSimultaneousWinner:;
- (id)initWithArenaManager:;
- (void)registerGestureDetector:detector:;
- (void)setArenaManager:;
- (void)setGestureToArenaMembers:;
- (void)unregisterGestureDetector:detector:;
- (void)unregisterGestureId:withMemberId:;
- (void)dealloc;
- (void).cxx_destruct;
@end
