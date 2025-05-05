@interface VIACacheHitLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)_logEvent:;
- (void)logEvent:;
- (void)didObserveEvent:;
- (id)initWithQueue:feedbackSubmitter:;
+ (id)feedbackNamesToLog;
@end
