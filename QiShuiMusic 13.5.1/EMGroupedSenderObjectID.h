@interface EMGroupedSenderObjectID : EMObjectID
@property (nonatomic) EMGroupedSenderCollectionItemID collectionItemID;
@property (nonatomic) NSString simpleAddress;
@property (nonatomic) EMThreadScope filteredMailboxScope;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)filteredMailboxScope;
- (id)init;
- (id)collectionItemID;
- (id)initWithSimpleAddress:filteredMailboxScope:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)simpleAddress;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCollectionItemID:filteredMailboxScope:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
