@interface EMMessageObjectID : EMObjectID
@property (nonatomic) EMMessageCollectionItemID collectionItemID;
@property (nonatomic) q globalMessageID;
@property (nonatomic) EMMailboxScope mailboxScope;
- (id)init;
- (id)mailboxScope;
- (id)collectionItemID;
- (long long)globalMessageID;
- (id)initWithGlobalMessageID:mailboxScope:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCollectionItemID:mailboxScope:;
- (id)initWithCollectionItemID:predicate:mailboxTypeResolver:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
