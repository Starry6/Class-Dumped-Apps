@interface BDUGLuckyRainConf : BDUGLuckyBDModel
@property (nonatomic) q rainId;
@property (nonatomic) BOOL needTimeCorrection;
@property (nonatomic) NSString preheatLottieUrl;
@property (nonatomic) double preheatDuration;
@property (nonatomic) NSString preheatTipContent;
@property (nonatomic) double startCountdownSecond;
@property (nonatomic) NSString startCountdownTip;
@property (nonatomic) double endCountdownMin;
@property (nonatomic) NSString endCountdownMinTip;
@property (nonatomic) double endCountdownSecond;
@property (nonatomic) NSString endCountdownSecondTip;
@property (nonatomic) double rainStartTimeMs;
@property (nonatomic) double rainEndTimeMs;
- (double)endCountdownMin;
- (double)rainStartTimeMs;
- (double)preheatDuration;
- (id)endCountdownMinTip;
- (double)endCountdownSecond;
- (id)endCountdownSecondTip;
- (BOOL)needTimeCorrection;
- (id)preheatLottieUrl;
- (id)preheatTipContent;
- (double)rainEndTimeMs;
- (id)rainIDStr;
- (long long)rainId;
- (void)setEndCountdownMin:;
- (void)setEndCountdownMinTip:;
- (void)setEndCountdownSecond:;
- (void)setEndCountdownSecondTip:;
- (void)setNeedTimeCorrection:;
- (void)setPreheatDuration:;
- (void)setPreheatLottieUrl:;
- (void)setPreheatTipContent:;
- (void)setRainEndTimeMs:;
- (void)setRainId:;
- (void)setRainStartTimeMs:;
- (void)setStartCountdownSecond:;
- (void)setStartCountdownTip:;
- (double)startCountdownSecond;
- (id)startCountdownTip;
- (void).cxx_destruct;
- (id)hashString;
+ (id)modelCustomPropertyMapper;
@end
