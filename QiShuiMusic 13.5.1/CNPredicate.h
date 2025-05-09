@interface CNPredicate : NSPredicate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray mainStoreContactIdentifiers;
@property (nonatomic) BOOL augmentMainStoreResults;
- (id)init;
- (BOOL)evaluateWithObject:;
- (id)predicateFormat;
- (id)shortDebugDescription;
- (id)initWithCoder:;
- (BOOL)evaluateWithObject:substitutionVariables:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPredicate:;
- (id)contactsFromDonationStore:;
- (id)copyWithZone:;
- (id)cn_predicate;
- (void)mainStoreDidFetchContacts:unifiedFetch:;
- (id)cn_resultTransformWithMatchInfos:;
- (void)cn_triageWithLog:serialNumber:;
- (id)mainStoreContactIdentifiers;
- (void)setMainStoreContactIdentifiers:;
- (BOOL)augmentMainStoreResults;
- (void)setAugmentMainStoreResults:;
- (void)_cn_acceptVisitor:;
+ (BOOL)supportsSecureCoding;
+ (id)os_log;
@end
