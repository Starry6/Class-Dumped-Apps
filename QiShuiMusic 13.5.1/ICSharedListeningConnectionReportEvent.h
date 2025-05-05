@interface ICSharedListeningConnectionReportEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSError error;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) double duration;
@property (nonatomic) NSMutableArray subEvents;
- (id)startDate;
- (void)setName:;
- (void)setStartDate:;
- (void)setError:;
- (id)initWithName:;
- (id)error;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)name;
- (double)duration;
- (void)addSubEvent:;
- (id)subEvents;
- (void)setSubEvents:;
@end
