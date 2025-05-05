@interface SAMICore_WebSocketKeepAliveParameter : NSObject
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) NSInteger timeOutSecond;
@property (nonatomic) NSInteger intervalTimeSecond;
@property (nonatomic) NSInteger retryCnt;
- (int)intervalTimeSecond;
- (int)retryCnt;
- (void)setIntervalTimeSecond:;
- (void)setRetryCnt:;
- (void)setTimeOutSecond:;
- (int)timeOutSecond;
- (void)setKeepAlive:;
- (BOOL)keepAlive;
@end
