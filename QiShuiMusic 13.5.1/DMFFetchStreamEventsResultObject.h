@interface DMFFetchStreamEventsResultObject : CATTaskResultObject
@property (nonatomic) NSArray eventStatuses;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)eventStatuses;
- (void)setEventStatuses:;
+ (BOOL)supportsSecureCoding;
@end
