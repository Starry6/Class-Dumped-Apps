@interface BDTrackerPriorityInfo : NSObject
@property (nonatomic) q priority;
@property (nonatomic) q intervalMultiple;
@property (nonatomic) NSSet events;
@property (nonatomic) NSDictionary paramKeys;
@property (nonatomic) NSDictionary paramValues;
@property (nonatomic) NSString reportPath;
@property (nonatomic) NSString reportHost;
@property (nonatomic) BDTrackerLogRequestStrategy requestStrategy;
@property (nonatomic) <BDTrackerStorage> storage;
@property (nonatomic) Q dataLength;
@property (nonatomic) NSString traceKey;
@property (nonatomic) NSString forwardPath;
@property (nonatomic) NSString forwardHost;
@property (nonatomic) BOOL forwardOpen;
@property (nonatomic) <BDTrackerStorage> forwardStorage;
- (void)setForwardHost:;
- (void)setForwardOpen:;
- (void)setParamValues:;
- (id)requestStrategy;
- (void)setForwardPath:;
- (BOOL)containEvent:;
- (id)forwardHost;
- (BOOL)forwardOpen;
- (id)forwardPath;
- (id)forwardStorage;
- (id)initWithDictionary:base:;
- (long long)intervalMultiple;
- (id)paramKeys;
- (id)paramValues;
- (id)reportHost;
- (id)reportPath;
- (void)setForwardStorage:;
- (void)setIntervalMultiple:;
- (void)setParamKeys:;
- (void)setReportHost:;
- (void)setReportPath:;
- (void)setRequestStrategy:;
- (void)setTraceKey:;
- (id)updatedForawrdURL:;
- (id)updatedURL:;
- (void)setDataLength:;
- (id)init;
- (void)setPriority:;
- (unsigned long long)dataLength;
- (void)setStorage:;
- (void)setEvents:;
- (id)storage;
- (void).cxx_destruct;
- (id)events;
- (long long)priority;
- (id)traceKey;
@end
