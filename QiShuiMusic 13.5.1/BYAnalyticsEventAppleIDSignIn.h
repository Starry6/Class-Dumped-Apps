@interface BYAnalyticsEventAppleIDSignIn : NSObject
@property (nonatomic) Q context;
@property (nonatomic) NSDate authenticationStartDate;
@property (nonatomic) NSDate signInStartDate;
@property (nonatomic) NSDate completionDate;
- (unsigned long long)context;
- (void)setContext:;
- (id)_eventPayload;
- (void)setCompletionDate:;
- (id)completionDate;
- (id)initWithAnalyticsManager:context:;
- (void)markSignInStartedAfterAuthenticationCompleted;
- (void)markSignInCompleted;
- (id)authenticationStartDate;
- (void)setAuthenticationStartDate:;
- (id)signInStartDate;
- (void)setSignInStartDate:;
@end
