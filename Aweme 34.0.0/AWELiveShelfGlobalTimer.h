@interface AWELiveShelfGlobalTimer : NSObject
@property (nonatomic) NSTimer countDownTimer;
@property (nonatomic) NSHashTable objectList;
@property (nonatomic) double localTimeInit;
@property (nonatomic) double serverTimeInit;
- (double)currentServerTime;
- (void)registerObject:;
- (void)_countDown;
- (void)updateServerTime:;
- (void)setServerTimeInit:;
- (void)setLocalTimeInit:;
- (double)serverTimeInit;
- (double)localTimeInit;
- (void)unRegisterObject:;
- (void).cxx_destruct;
- (id)countDownTimer;
- (void)setCountDownTimer:;
- (id)objectList;
- (void)setObjectList:;
+ (id)shareInstance;
@end
