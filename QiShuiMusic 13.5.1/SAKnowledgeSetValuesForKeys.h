@interface SAKnowledgeSetValuesForKeys : SABaseClientBoundCommand
@property (nonatomic) NSArray entries;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEntries:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)entries;
+ (id)setValuesForKeys;
+ (id)setValuesForKeysWithDictionary:context:;
@end
