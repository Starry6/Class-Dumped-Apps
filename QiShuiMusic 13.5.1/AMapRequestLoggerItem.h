@interface AMapRequestLoggerItem : NSObject
@property (nonatomic) <AMapComponent> component;
@property (nonatomic) NSOperation operation;
@property (nonatomic) NSDate beginTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) BOOL needReport;
- (BOOL)needReport;
- (void)setNeedReport:;
- (id)operation;
- (id)beginTime;
- (id)component;
- (void)setEndTime:;
- (void)setOperation:;
- (void)setBeginTime:;
- (id)endTime;
- (void).cxx_destruct;
- (void)setComponent:;
@end
