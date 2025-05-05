@interface VSAccountManager : NSObject
@property (nonatomic) VSSecurityTask securityTask;
@property (nonatomic) VSPrivacyInfoCenter privacyInfoCenter;
@property (nonatomic) VSViewServiceRequestCenter requestCenter;
@property (nonatomic) VSLinkedOnOrAfterChecker linkedOnOrAfterChecker;
@property (nonatomic) <VSAccountManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setLinkedOnOrAfterChecker:;
- (void)setDelegate:;
- (id)linkedOnOrAfterChecker;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewServiceRequestOperation:presentViewController:;
- (void)viewServiceRequestOperation:dismissViewController:;
- (BOOL)viewServiceRequestOperation:shouldAuthenticateAccountProviderWithIdentifier:;
- (void)checkAccessStatusWithOptions:completionHandler:;
- (id)_enqueueViewServiceRequest:completionHandler:;
- (id)enqueueAccountMetadataRequest:completionHandler:;
- (id)securityTask;
- (void)setSecurityTask:;
- (id)privacyInfoCenter;
- (void)setPrivacyInfoCenter:;
- (id)requestCenter;
- (void)setRequestCenter:;
@end
