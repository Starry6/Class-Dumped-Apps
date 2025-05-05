@interface ASCAppOfferStateMachine : NSObject
@property (nonatomic) <ASCOffer> offer;
@property (nonatomic) ASCAppOfferStateCenter stateCenter;
@property (nonatomic) NSMutableArray delegates;
@property (nonatomic) ASCAppOfferSavedState mostRecentState;
@property (nonatomic) NSString mostRecentStatusText;
@property (nonatomic) ASCAppOfferSavedState overrideState;
- (void)addDelegate:;
- (id)offer;
- (id)delegates;
- (void)dealloc;
- (void)removeDelegate:;
- (void)enumerateDelegatesUsingBlock:;
- (void).cxx_destruct;
- (id)overrideState;
- (void)setOverrideState:;
- (id)initWithOffer:stateCenter:;
- (void)offerStateDidChange:withMetadata:flags:;
- (void)offerStatusTextDidChange:;
- (id)performActionWithActivity:inContext:;
- (void)installTemporaryWaitingState;
- (void)invalidateTemporaryStateForcingUpdate:;
- (id)stateCenter;
- (id)mostRecentState;
- (void)setMostRecentState:;
- (id)mostRecentStatusText;
- (void)setMostRecentStatusText:;
@end
