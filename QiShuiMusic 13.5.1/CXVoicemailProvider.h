@interface CXVoicemailProvider : NSObject
@property (nonatomic) CXAbstractProvider abstractProvider;
@property (nonatomic) <CXVoicemailProviderDelegate> delegate;
@property (nonatomic) <CXVoicemailProviderHostProtocol> voicemailProviderHostDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray pendingTransactions;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void)performAction:;
- (id)pendingTransactions;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void)setDelegate:queue:;
- (id)commitTransaction:;
- (id)handleActionTimeout:;
- (void)reportNewVoicemailsWithUpdates:;
- (void)reportVoicemailsUpdated:;
- (void)reportVoicemailsRemovedWithUUIDs:;
- (id)abstractProvider;
- (id)voicemailProviderHostDelegate;
- (id)pendingVoicemailActionsOfClass:withVoicemailUUID:;
- (void)reportNewVoicemailWithUpdate:;
- (void)reportVoicemailUpdated:;
- (void)reportVoicemailRemovedWithUUID:;
@end
