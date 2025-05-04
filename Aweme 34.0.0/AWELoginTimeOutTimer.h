@interface AWELoginTimeOutTimer : NSObject
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? timeOutBlock;
- (void)appDidEnterBackgroundNotification:;
- (id)timeOutBlock;
- (void)setTimeOutBlock:;
- (void)appDidBecomeActiveNotification:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updateDuration:;
@end
