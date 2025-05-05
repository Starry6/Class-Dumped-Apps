@interface CNReputationFutureBuilder : NSObject
@property (nonatomic) CNReputationHandle handle;
@property (nonatomic) CNReputationCoreRecentsAdapter coreRecentsAdapter;
@property (nonatomic) CNReputationContactsAdapter contactsAdapter;
@property (nonatomic) CNReputationLogger logger;
@property (nonatomic) CNFuture scoreFuture;
- (id)logger;
- (id)handle;
- (id)build;
- (id)contactsAdapter;
- (void).cxx_destruct;
- (id)coreRecentsAdapter;
- (id)initWithHandle:coreRecentsAdapter:contactsAdapter:logger:;
- (void)addCoreRecentsTrust;
- (id)coreRecentsTrustForHandle:;
- (void)addContactsTrustForEmailAddress;
- (id)contactsTrustForEmailAddress:;
- (void)addContactsTrustForPhoneNumber;
- (id)contactsTrustForPhoneNumber:;
- (id)scoreFuture;
- (void)setScoreFuture:;
@end
