@interface SKStoreReviewController : NSObject
+ (void)requestReview;
+ (void)requestReviewInScene:;
+ (void)requestReviewViaDirectInjectionFlowInScene:requestToken:;
+ (unsigned long long)convertInterfaceOrientation:;
@end
