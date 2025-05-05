@interface PAWorkInProgressAccessInterval : NSObject
@property (nonatomic) PAAccess access;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
- (id)access;
- (id)init;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void)setAccess:;
- (void).cxx_destruct;
- (id)asSealedRecord;
@end
