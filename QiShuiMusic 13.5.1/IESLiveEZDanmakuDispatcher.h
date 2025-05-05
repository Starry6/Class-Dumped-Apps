@interface IESLiveEZDanmakuDispatcher : NSObject
@property (nonatomic) NSMutableArray queuedSpirits;
@property (nonatomic) NSMutableArray mutableActivatedSipirts;
@property (nonatomic) IESLiveEZDanmakuReuseViewPool viewPool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveEZDanmakuDispatcherDelegate> delegate;
- (void)dispatchSpirits;
- (id)activatedSpirits;
- (void)addEZDanmakuSiprit:;
- (void)assembleReuseViewPool:;
- (void)clearQueuedSpirits;
- (void)danmakuSpirit:stateDidChange:;
- (void)deactivateAllSpirits;
- (void)fragmentOrientationChanged:;
- (id)mutableActivatedSipirts;
- (void)p_dispatchSpirit:;
- (id)queuedSpirits;
- (void)setMutableActivatedSipirts:;
- (void)setQueuedSpirits:;
- (void)setViewPool:;
- (void)updateWithEZDanamkuSettings:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)viewPool;
@end
