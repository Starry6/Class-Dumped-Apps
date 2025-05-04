@interface AWEC2FeedValidAction : NSObject
@property (nonatomic) q daysDuration;
@property (nonatomic) q clickTimes;
@property (nonatomic) q slideTimes;
@property (nonatomic) double stayTime;
@property (nonatomic) q enterTimes;
- (long long)slideTimes;
- (void)setSlideTimes:;
- (void)setStayTime:;
- (double)stayTime;
- (long long)daysDuration;
- (void)setDaysDuration:;
- (long long)clickTimes;
- (void)setClickTimes:;
- (long long)enterTimes;
- (void)setEnterTimes:;
@end
