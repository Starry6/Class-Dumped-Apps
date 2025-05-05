@interface BDUGLuckyLottieConf : BDUGLuckyBDModel
@property (nonatomic) NSString lottieUrl;
@property (nonatomic) double playDurationMs;
@property (nonatomic) BOOL repeat;
@property (nonatomic) BOOL clickDisappear;
- (BOOL)clickDisappear;
- (id)lottieUrl;
- (double)playDurationMs;
- (void)setClickDisappear:;
- (void)setLottieUrl:;
- (void)setPlayDurationMs:;
- (void).cxx_destruct;
- (id)hashString;
- (id)copyWithZone:;
- (BOOL)repeat;
- (void)setRepeat:;
+ (id)modelCustomPropertyMapper;
@end
