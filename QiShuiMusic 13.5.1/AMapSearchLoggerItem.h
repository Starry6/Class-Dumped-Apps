@interface AMapSearchLoggerItem : NSObject
@property (nonatomic) AMapNetworkOperation operation;
@property (nonatomic) NSDate beginTime;
@property (nonatomic) NSDate endTime;
- (id)operation;
- (id)beginTime;
- (void)setEndTime:;
- (void)setOperation:;
- (void)setBeginTime:;
- (id)endTime;
- (void).cxx_destruct;
@end
