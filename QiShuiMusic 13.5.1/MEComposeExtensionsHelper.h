@interface MEComposeExtensionsHelper : NSObject
@property (nonatomic) <MEMailComposeExtensionDelegate> extensionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setExtensionDelegate:;
- (id)extensionDelegate;
- (void)extensionsMatched:;
- (void)extensionsNoLongerMatching:;
- (void)regenerateEmailAddressTokenChangesForSession:forContextUUID:;
- (void)dispatchEmailAddressTokenIconRequestsForMailMessage:completionHandler:;
- (void)getAdditionalHeadersForMessage:completionHandler:;
- (void)performSendValidationForMessage:completionHandler:;
- (void)appExtensionViewControllerForExtensionIdentifier:completionHandler:;
- (id)initWithComposeSession:extensionsController:iconReloader:;
- (void)_dispatchMailComposeSessionDidBeginForExtensions:;
+ (id)log;
@end
