@interface SFPrivacyReportOnboardingController : NSObject
+ (id)onboardingViewControllerWithCompletionHandler:;
+ (id)_createEnableTrackerProtectionControllerWithCompletionHandler:;
+ (id)_createEnableRecommendedProtectionControllerWithCompletionHandler:;
@end
