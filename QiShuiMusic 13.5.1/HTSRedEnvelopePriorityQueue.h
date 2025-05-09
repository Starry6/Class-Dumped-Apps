@interface HTSRedEnvelopePriorityQueue : NSObject
@property (nonatomic) IESLiveGCDTimer countTimer;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) BoxListResponse_ResponseData currentRedEnvelope;
@property (nonatomic) RACSubject currentSubject;
@property (nonatomic) RACSubject allValuesSubject;
@property (nonatomic) Q dismissTime;
@property (nonatomic) NSNumber currentShowingBoxId;
@property (nonatomic) NSArray currentShowResultValues;
@property (nonatomic) BOOL isFireHeartbeat;
@property (nonatomic) q countNumber;
@property (nonatomic) q delayCountTimerEndNumber;
@property (nonatomic) NSNumber rushOptCode;
@property (nonatomic) @? trackBlock;
@property (nonatomic) <IESLiveRedEnvelopePriorityQueueDelegate> delegate;
@property (nonatomic) NSArray allValues;
@property (nonatomic) RACSignal allValuesSignal;
@property (nonatomic) RACSignal currentRedEnvelopeSignal;
- (id)allValuesSignal;
- (void)setRushOptCode:;
- (BOOL)isFireHeartbeat;
- (id)nextRedEnvelope;
- (void)setCountNumber:;
- (void)setDismissTime:;
- (id)allValuesSubject;
- (void)countDownAndCleanMessagesIfNeeded;
- (void)countDownAndCleanMessagesIfNeededOptimized;
- (long long)countNumber;
- (id)countTimer;
- (id)currentRedEnvelope;
- (id)currentRedEnvelopeSignal;
- (id)currentShowResultValues;
- (id)currentShowingBoxId;
- (id)currentSubject;
- (long long)delayCountTimerEndNumber;
- (void)deque:;
- (void)didRemoveRedEnvelopes:;
- (unsigned long long)dismissTime;
- (void)enque:;
- (void)fireHeartbeat;
- (void)insertOrderly:;
- (void)peekCurrentIfNeeded;
- (void)redEnvelopeDidFinish:;
- (id)richMenAndTotalMoney;
- (id)rushOptCode;
- (void)setAllValuesSubject:;
- (void)setCountTimer:;
- (void)setCurrentRedEnvelope:;
- (void)setCurrentShowResultValues:;
- (void)setCurrentShowingBoxId:;
- (void)setCurrentSubject:;
- (void)setDelayCountTimerEndNumber:;
- (void)setIsFireHeartbeat:;
- (void)setTrackBlock:;
- (void)setupTimerIfNeeded;
- (id)trackBlock;
- (void)updateCurrentShowingBoxId:;
- (void)updateLuckyBoxStatusWithBoxId:boxStatus:;
- (void)updateLuckyBoxWinStatusWithBoxId:resultStatus:;
- (void)setBuffer:;
- (id)init;
- (void)dealloc;
- (id)buffer;
- (void)setDelegate:;
- (void)clearAll;
- (id)delegate;
- (void).cxx_destruct;
- (id)allValues;
- (void)setQueue:;
- (id)queue;
@end
