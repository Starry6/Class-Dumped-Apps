@interface IDSMissingMessageMetric : NSObject
@property (nonatomic) q reason;
@property (nonatomic) NSString guid;
@property (nonatomic) NSString service;
@property (nonatomic) NSDictionary additionalInfo;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) NSNumber command;
- (id)payload;
- (id)additionalInfo;
- (long long)reason;
- (id)service;
- (id)command;
- (void).cxx_destruct;
- (BOOL)_isInternal;
- (id)guid;
- (id)initWithReason:guid:service:additionalInformation:;
- (BOOL)shouldReportMetric;
- (BOOL)_shouldReportReason;
- (BOOL)_shouldReportMetricForExternal;
- (BOOL)_shouldReportReasonForExternal;
@end
