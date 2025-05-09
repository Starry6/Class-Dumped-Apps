@interface BDUGLuckyTabInfo : BDUGLuckyBDModel
@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (nonatomic) NSString activityId;
@property (nonatomic) BDUGLuckyTabConf tabConf;
@property (nonatomic) BDUGLuckyTipConf tipConf;
@property (nonatomic) BDUGLuckyLottieConf lottieConf;
@property (nonatomic) NSString logExtra;
@property (nonatomic) q tabId;
@property (nonatomic) NSString tabActionUrl;
- (id)tabConf;
- (id)tipConf;
- (double)endTimeMs;
- (BOOL)isEqualToTabInfo:;
- (id)logExtra;
- (id)lottieConf;
- (void)setEndTimeMs:;
- (void)setLogExtra:;
- (void)setLottieConf:;
- (void)setTabActionUrl:;
- (void)setTabConf:;
- (void)setTabId:;
- (void)setTipConf:;
- (id)tabActionUrl;
- (id)tabIDStr;
- (long long)tabId;
- (void).cxx_destruct;
- (id)hashString;
- (id)copyWithZone:;
- (id)activityId;
- (void)setActivityId:;
- (double)startTimeMs;
- (void)setStartTimeMs:;
+ (id)modelCustomPropertyMapper;
@end
