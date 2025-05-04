@interface AWEHPBottomTabLottieParams : AWEHPBaseComponentModel
@property (nonatomic) q lottieType;
@property (nonatomic) AWEHPChannelLottieParams lottieParams;
@property (nonatomic) AWEHPLottiePlayParams playParams;
- (id)lottieParams;
- (long long)lottieType;
- (void)setLottieParams:;
- (void)setPlayParams:;
- (void)setLottieType:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)playParams;
@end
