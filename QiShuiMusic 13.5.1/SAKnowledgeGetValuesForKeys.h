@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand
@property (nonatomic) NSArray keys;
@property (nonatomic) NSString storeName;
@property (nonatomic) NSString storeType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeType;
- (void)setStoreType:;
- (id)keys;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)storeName;
- (void)setKeys:;
- (id)encodedClassName;
- (void)setStoreName:;
- (BOOL)mutatingCommand;
+ (id)getValuesForKeys;
+ (id)getValuesForKeysWithDictionary:context:;
@end
