@interface BDUGLuckyDogPopUpObj : NSObject
@property (nonatomic) NSString dialogName;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) @? shouldShowHandler;
@property (nonatomic) @? showPopUpHandler;
@property (nonatomic) @? forceHideHandler;
@property (nonatomic) NSTimer expiredTimer;
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) BOOL isLynxPopObj;
@property (nonatomic) double nextPollingTime;
- (double)nextPollingTime;
- (id)dialogName;
- (id)expiredTimer;
- (BOOL)finishSelfWithType:;
- (id)forceHideHandler;
- (BOOL)isLynxPopObj;
- (BOOL)removeSelf;
- (void)renewalExpiredTimer;
- (void)setDialogName:;
- (void)setExpiredTimer:;
- (void)setExtraInfo:;
- (void)setForceHideHandler:;
- (void)setIsLynxPopObj:;
- (void)setNextPollingTime:;
- (void)setShouldShowHandler:;
- (void)setShowPopUpHandler:;
- (void)setupExpiredTimer;
- (id)shouldShowHandler;
- (id)showPopUpHandler;
- (void)setKeepAlive:;
- (void)stopTimer;
- (id)init;
- (void)setPriority:;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)keepAlive;
- (long long)priority;
- (void)onTimer;
- (id)extraInfo;
@end
