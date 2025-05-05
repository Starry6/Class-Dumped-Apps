@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)fetchAnalyticsConsent;
- (void)setAnalyticsConsent:completion:;
- (void)fetchSubscriptionStatusWithCompletion:;
@end
