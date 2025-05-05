@interface BDUGLuckyCountDownPendantModel : BDUGLuckyJSONModel
@property (nonatomic) NSString token;
@property (nonatomic) BDUGLuckyCountDownPendantInfoModel timerComponent;
@property (nonatomic) q totalTime;
- (void)setTimerComponent:;
- (id)timerComponent;
- (long long)totalTime;
- (id)token;
- (void)setTotalTime:;
- (void)setToken:;
- (void).cxx_destruct;
@end
