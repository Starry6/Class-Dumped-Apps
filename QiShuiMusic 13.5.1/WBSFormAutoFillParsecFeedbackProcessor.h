@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject
@property (nonatomic) <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)sendFeedbackWithCorrectionSet:;
- (id)domainPolicyProvider;
- (void)setDomainPolicyProvider:;
- (id)initWithGlobalFeedbackDispatcher:domainPolicyProvider:autoFillVersion:;
- (void)_getFeedbackWithCorrectionSet:completionHandler:;
- (id)_feedbackWithCorrectionSet:includeOrigin:;
@end
