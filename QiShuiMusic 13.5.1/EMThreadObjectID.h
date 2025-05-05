@interface EMThreadObjectID : EMObjectID
@property (nonatomic) EMThreadCollectionItemID collectionItemID;
@property (nonatomic) q conversationID;
@property (nonatomic) EMThreadScope threadScope;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (id)init;
- (id)threadScope;
- (id)collectionItemID;
- (id)initWithConversationID:threadScope:;
- (id)initWithCollectionItemID:threadScope:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)conversationID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
