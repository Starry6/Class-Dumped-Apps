@interface AWEInnerPushForceAlert : AWEInnerPushAlertBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)forceAlertIDForEvent:;
- (unsigned long long)forceAlertViewStyleForEvent:;
- (void)forceShowWithContext:callbackWrapper:;
- (void)forceDismissWithCallTrace:;
@end
