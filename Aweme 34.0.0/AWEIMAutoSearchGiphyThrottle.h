@interface AWEIMAutoSearchGiphyThrottle : NSObject
@property (nonatomic) NSString timerName;
@property (nonatomic) q interval;
@property (nonatomic) q lastExcuteTime;
- (void)setLastExcuteTime:;
- (void)excuteIfCanWithBlock:;
- (id)timerName;
- (void)setTimerName:;
- (long long)lastExcuteTime;
- (long long)interval;
- (void)setInterval:;
- (void).cxx_destruct;
- (id)initWithInterval:;
@end
