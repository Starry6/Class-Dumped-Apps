@interface EDMessageQueryEvaluator : NSObject
@property (nonatomic) EFQuery messageQuery;
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) EMMailboxScope mailboxScope;
@property (nonatomic) NSCache spotlightPredicateCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mailboxScope;
- (id)messageQuery;
- (id)transformMessages:includeDeleted:;
- (id)initWithQuery:messagePersistence:;
- (id)transformAndFilterMessages:;
- (id)spotlightPredicateCache;
- (id)transformAndFilterMessages:includeDeleted:;
- (id)transformMessages:;
- (id)filterMessages:unmatchedMessages:;
- (void).cxx_destruct;
- (void)setSpotlightPredicateCache:;
- (id)messagePersistence;
+ (id)log;
@end
