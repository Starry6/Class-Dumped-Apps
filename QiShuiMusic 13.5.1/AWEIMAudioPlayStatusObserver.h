@interface AWEIMAudioPlayStatusObserver : NSObject
@property (nonatomic) Q status;
@property (nonatomic) double currentTime;
- (void)setCurrentTime:;
- (void)setStatus:;
- (double)currentTime;
- (unsigned long long)status;
@end
