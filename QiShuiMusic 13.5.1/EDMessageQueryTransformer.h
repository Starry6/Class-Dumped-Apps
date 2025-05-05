@interface EDMessageQueryTransformer : NSObject
@property (nonatomic) <EDAccountsProvider> accountsProvider;
@property (nonatomic) EDMailboxPersistence mailboxPersistence;
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) <EMVIPManager> vipManager;
- (id)vipManager;
- (void).cxx_destruct;
- (id)accountsProvider;
- (id)mailboxPersistence;
- (id)messagePersistence;
- (id)initWithAccountsProvider:mailboxPersistence:messagePersistence:vipManager:;
- (id)transformPredicate:;
- (id)transformCompoundPredicate:;
- (id)transformSubpredicates:;
- (id)transformComparisonPredicate:;
- (id)simplifyCompoundPredicate:;
- (id)simplifyAndPredicate:;
- (id)simplifyOrPredicate:;
- (id)simplifyNotPredicate:;
- (id)simplifySingleSubpredicate:;
@end
