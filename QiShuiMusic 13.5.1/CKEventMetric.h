@interface CKEventMetric : NSObject
@property (nonatomic) NSMutableDictionary attributes;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) BOOL isPushTriggerFired;
- (void)setStartTime:;
- (void)setIsPushTriggerFired:;
- (id)generateEventMetricInfo;
- (void)setEndTime:;
- (id)initWithCoder:;
- (id)initWithEventName:;
- (id)startTime;
- (id)attributes;
- (void)setObject:forKeyedSubscript:;
- (BOOL)associateWithCompletedOperation:;
- (id)endTime;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (id)eventName;
- (void).cxx_destruct;
- (id)initWithEventName:atTime:;
- (BOOL)isPushTriggerFired;
- (void)setMetricValue:forKey:;
+ (BOOL)supportsSecureCoding;
@end
