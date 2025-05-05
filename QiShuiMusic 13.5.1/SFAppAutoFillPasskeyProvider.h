@interface SFAppAutoFillPasskeyProvider : NSObject
- (id)init;
- (void)userSelectedPasskey:authenticatedLAContext:;
- (void)getAvailablePasskeysForAppWithAuditToken:withCompletionHandler:;
- (void)userSelectedPasskeyWithUserHandle:authenticatedLAContext:;
- (void).cxx_destruct;
- (void)getAvailablePasskeysForApplicationIdentifier:completionHandler:;
@end
