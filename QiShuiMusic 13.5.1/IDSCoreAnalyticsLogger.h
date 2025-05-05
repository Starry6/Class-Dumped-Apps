@interface IDSCoreAnalyticsLogger : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDomain:;
- (void)logMetric:;
- (void).cxx_destruct;
- (id)domain;
+ (id)defaultLogger;
@end
