@interface WBSCloudSubscriptionFeatureAvailabilityObserver : NSObject
- (void)getFeatureEligibilityWithCompletionHandler:;
- (void)dealloc;
- (void)_requestFeatureObjectBlockingQueueUntilResponse:;
- (id)initWithFeatureIdentifier:;
- (BOOL)_overridenAvailability;
- (void).cxx_destruct;
- (void)_requestFeatureEligibilityBlockingQueueUntilResponse:;
- (void)getFeatureAvailabilityWithCompletionHandler:;
+ (id)provisionNewHideMyEmailAvailabilityObserver;
+ (id)porcupineAvailabilityObserver;
@end
