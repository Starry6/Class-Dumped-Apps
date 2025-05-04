@interface AWECommerceWorkflowLogItem : NSObject
@property (nonatomic) NSMutableArray traceNodes;
@property (nonatomic) NSMutableArray traceTimestamps;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSString name;
- (void)appendTraceKey:;
- (void)startTraceWithTraceKey:;
- (id)uploadLogDict;
- (void)setTraceNodes:;
- (void)setTraceTimestamps:;
- (id)traceNodes;
- (id)traceTimestamps;
- (id)startDate;
- (void)encodeWithCoder:;
- (void)setStartDate:;
- (id)initWithName:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)initWithCoder:;
@end
