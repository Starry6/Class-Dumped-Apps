@interface AWEAntiAddictDailyAlertViewModel : NSObject
@property (nonatomic) AWEAntiAddictDailyAlertUIConfig config;
@property (nonatomic) Q timeType;
- (unsigned long long)timeType;
- (void)setTimeType:;
- (id)initWithUIConfig:timeType:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
