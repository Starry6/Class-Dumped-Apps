@interface IESLiveCarnivalDanmakuEngine : NSObject
@property (nonatomic) IESLiveCarnivalDanmakuSettings engineSettings;
@property (nonatomic) q displayedDanmakuCountUntilNextEgg;
@property (nonatomic) q availablePercent;
@property (nonatomic) @? finishDisplayBlock;
@property (nonatomic) NSMutableArray metaDatas;
@property (nonatomic) IESLiveEZDanmakuEngine ezDanmakuEngine;
@property (nonatomic) IESLiveEZDanmakuContourCanvas contourCanvas;
@property (nonatomic) IESLiveEZDanmakuMutexDispatcher mutexDispatcher;
@property (nonatomic) q lastEggDanmakuAppearCount;
@property (nonatomic) q displayingNodeCount;
@property (nonatomic) BOOL working;
@property (nonatomic) q orientation;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomservice;
@property (nonatomic) NSMutableArray generalCarnivalSpecialEggs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)creatEggDanmaku;
- (id)getRandomConfig;
- (id)mutexDispatcher;
- (void)setRoomservice:;
- (id)ezDanmakuEngine;
- (BOOL)working;
- (long long)availablePercent;
- (id)centerSpiritWithNode:;
- (id)contourCanvas;
- (void)danmakuEngine:didTouchSpirit:;
- (void)danmakuEngineRuningDanmakuCountChange:;
- (void)danmakuEngineSpiritDidFired:;
- (long long)displayedDanmakuCountUntilNextEgg;
- (long long)displayingNodeCount;
- (id)engineSettings;
- (void)finishDisplay:;
- (id)finishDisplayBlock;
- (void)fireDanmakuWithNode:;
- (void)fireEggDanmakuWithNode:;
- (id)generalCarnivalSpecialEggs;
- (long long)getEggAppearRandomCount;
- (double)getSpeedMultipleWithChatScore:;
- (id)initWithContentView:engineSettings:orientation:;
- (long long)lastEggDanmakuAppearCount;
- (id)metaDatas;
- (id)mutexSpiritWithNode:;
- (void)onOrientationTransitionBegin:;
- (void)onReceivedMaskContourInfo:;
- (void)orientaionDidChange:;
- (id)prepareToDisplayNodes;
- (id)radiationSpiritWithNode:;
- (void)removeAllDanmuku;
- (void)removeAllRunningDanmuku;
- (void)respondToKeyboardShow:;
- (id)roomservice;
- (void)setAvailablePercent:;
- (void)setContourCanvas:;
- (void)setContourCanvasHiddenStatus:;
- (void)setDisplayedDanmakuCountUntilNextEgg:;
- (void)setDisplayingNodeCount:;
- (void)setEngineSettings:;
- (void)setEzDanmakuEngine:;
- (void)setFinishDisplayBlock:;
- (void)setGeneralCarnivalSpecialEggs:;
- (void)setLastEggDanmakuAppearCount:;
- (void)setMetaDatas:;
- (void)setMutexDispatcher:;
- (void)setWorking:;
- (void)setupChannels;
- (BOOL)showEggDanmakuAlone:;
- (void)trackRedPacketCarnivalDanmakuShowWithSpirit:;
- (void)updateCanvasAlpha:withAnimation:;
- (void)updateDanmakuAlpha:;
- (void)updateDanmakuAreaType:;
- (void)updateDanmakuFontSizeType:;
- (void)start;
- (void)hide;
- (long long)orientation;
- (void)stop;
- (void)show;
- (void).cxx_destruct;
- (void)pause;
- (void)setOrientation:;
@end
