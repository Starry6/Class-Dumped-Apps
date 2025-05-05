@interface SAKnowledgeDeleteValueForKey : SABaseClientBoundCommand
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
+ (id)deleteValueForKey;
+ (id)deleteValueForKeyWithDictionary:context:;
@end
