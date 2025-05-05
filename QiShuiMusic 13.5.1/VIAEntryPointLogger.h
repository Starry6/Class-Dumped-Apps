@interface VIAEntryPointLogger : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)_logEvent:;
- (void)logEvent:;
- (void)didObserveEvent:;
- (id)initWithQueue:feedbackSubmitter:eventCache:;
- (void)_logDependentEvent:;
- (void)_logStartEvent:;
- (void)_logEndEvent:;
- (void)_logFeedback:queryID:;
- (BOOL)_preconditionCheckEvent:;
+ (id)feedbackNamesToLog;
@end
