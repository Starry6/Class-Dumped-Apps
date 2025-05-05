@interface AMSEngagementMessageEventResponse : AMSEngagementEnqueueResult
@property (nonatomic) NSArray messageActions;
- (void)_processActions:;
- (id)messageActions;
- (void).cxx_destruct;
- (id)initWithEnqueueResult:;
@end
