@interface AWELivePreStreamInnerRoomLuckyBagConfig : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWELivePreStreamInnerRoomDisplayManager displayManager;
@property (nonatomic) IESLiveGCDTimer startTimer;
@property (nonatomic) IESLiveGCDTimer showTimer;
@property (nonatomic) AWELivePreStreamInnerRoomLuckyBagView contentView;
@property (nonatomic) AWELivePreStreamContext context;
@property (nonatomic) BOOL receviceMsg;
@property (nonatomic) BOOL msgCanShow;
@property (nonatomic) BOOL isClickedArea;
@property (nonatomic) NSNumber priority;
@property (nonatomic) q drawAtTime;
@property (nonatomic) q lotteryID;
@property (nonatomic) NSNumber msgType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowTimer:;
- (void)onUserQuitLiveRoom:;
- (long long)lotteryID;
- (void)setLotteryID:;
- (void)setMsgCanShow:;
- (void)setReceviceMsg:;
- (void)setStartTimer:;
- (BOOL)canDisplayElementWithModel:;
- (BOOL)receviceMsg;
- (BOOL)msgCanShow;
- (id)initWithModel:displayManager:context:;
- (void)startCountDownTimerIfNeeded:;
- (void)handleMessage:actionBlock:;
- (id)enterRoomBuriedParams;
- (id)enterRoomBussinessParams;
- (BOOL)isClickedArea;
- (void)setIsClickedArea:;
- (BOOL)isLotteryValidTime;
- (void)showLuckyBagWithBlock:;
- (BOOL)p_checkFrequenceControlWithMsgType:;
- (void)setDrawAtTime:;
- (long long)drawAtTime;
- (void)cleanFrequency;
- (void)setModel:;
- (id)displayManager;
- (void)setDisplayManager:;
- (id)startTimer;
- (id)priority;
- (id)contentView;
- (id)model;
- (void)setPriority:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)invalidateTimer;
- (void)reset;
- (id)context;
- (id)showTimer;
- (id)msgType;
- (void)setMsgType:;
@end
