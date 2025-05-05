@interface TUCallFilterController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <TUCallFilterControllerActions> actionsDelegate;
@property (nonatomic) BOOL silenceUnknownCallersEnabled;
@property (nonatomic) BOOL silenceUnknownFaceTimeCallersEnabled;
- (id)initWithActionsDelegate:serialQueue:;
- (id)policyForAddresses:forBundleIdentifier:;
- (BOOL)willRestrictAddresses:forBundleIdentifier:;
- (BOOL)containsRestrictedHandle:forBundleIdentifier:performSynchronously:;
- (BOOL)shouldRestrictAddresses:forBundleIdentifier:performSynchronously:;
- (BOOL)isUnknownAddress:normalizedAddress:forBundleIdentifier:;
- (void).cxx_destruct;
- (id)actionsDelegate;
- (id)queue;
- (BOOL)silenceUnknownCallersEnabled;
- (BOOL)silenceUnknownFaceTimeCallersEnabled;
- (BOOL)isUnknownHandle:;
- (BOOL)shouldRestrictDialRequest:;
- (BOOL)shouldRestrictDialRequest:performSynchronously:;
- (unsigned long long)callFilterStatusForDialRequest:;
- (id)restrictedContacts:callProvider:;
- (BOOL)containsRestrictedHandle:forBundleIdentifier:;
- (id)addressesToCheckForRestrictionsInConversation:;
- (BOOL)shouldRestrictConversation:performSynchronously:;
- (BOOL)shouldRestrictAddresses:performSynchronously:;
- (BOOL)shouldRestrictJoinConversationRequest:performSynchronously:;
- (BOOL)shouldRestrictAddresses:forBundleIdentifier:;
- (id)bundleIdentifierForCallProvider:;
@end
