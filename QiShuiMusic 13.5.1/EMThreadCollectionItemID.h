@interface EMThreadCollectionItemID : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q conversationID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)cachedSelf;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (long long)conversationID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithConversationID:;
+ (BOOL)supportsSecureCoding;
@end
