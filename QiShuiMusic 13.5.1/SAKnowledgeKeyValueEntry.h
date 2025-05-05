@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand
@property (nonatomic) NSString key;
@property (nonatomic) NSString storeName;
@property (nonatomic) NSString storeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeType;
- (void)setStoreType:;
- (id)groupIdentifier;
- (id)key;
- (BOOL)requiresResponse;
- (id)storeName;
- (void)setKey:;
- (id)encodedClassName;
- (void)setStoreName:;
+ (id)keyValueEntry;
+ (id)keyValueEntryWithDictionary:context:;
@end
