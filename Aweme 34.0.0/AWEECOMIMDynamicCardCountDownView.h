@interface AWEECOMIMDynamicCardCountDownView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) YYLabel countDownLable;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BDPCDDynamicCardCountDownModel countDownModel;
- (void)timerInvalidate;
- (void)updateWithElememtModel:;
- (id)countDownModel;
- (void)setCountDownModel:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (void)setCountDownLable:;
- (id)countDownLable;
- (void)onCountDown;
- (void)setTimer:;
- (id)timer;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)widthWithElementModel:;
+ (double)heightWithElementModel:;
+ (id)textSizeWithWithModel:;
+ (long long)countDownDiff:;
+ (id)countDownText:;
+ (BOOL)isVisible:;
@end
