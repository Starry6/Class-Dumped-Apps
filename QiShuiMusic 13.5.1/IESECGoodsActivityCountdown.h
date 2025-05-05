@interface IESECGoodsActivityCountdown : NSObject
@property (nonatomic) NSString day;
@property (nonatomic) NSString hour;
@property (nonatomic) NSString minute;
@property (nonatomic) NSString second;
@property (nonatomic) double currentTime;
@property (nonatomic) q prefixSize;
@property (nonatomic) q timerSize;
- (BOOL)LessThanOneDay;
- (id)currentCountdownString;
- (id)currentCountdownStringWithoutHour;
- (long long)prefixSize;
- (void)setPrefixSize:;
- (void)setTimerSize:;
- (long long)timerSize;
- (void)setCurrentTime:;
- (id)minute;
- (id)day;
- (id)hour;
- (void)setMinute:;
- (void)setHour:;
- (id)second;
- (void).cxx_destruct;
- (double)currentTime;
- (void)setDay:;
- (void)setSecond:;
@end
