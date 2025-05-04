@interface AWECodeGenTimerVideoInfoModel : AWEBaseDataModel
@property (nonatomic) q publicTime;
@property (nonatomic) q timerStatus;
- (long long)publicTime;
- (void)setPublicTime:;
- (long long)timerStatus;
- (void)setTimerStatus:;
+ (id)JSONKeyPathsByPropertyKey;
@end
