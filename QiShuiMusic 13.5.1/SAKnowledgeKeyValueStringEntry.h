@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry
@property (nonatomic) NSString value;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)keyValueStringEntry;
+ (id)keyValueStringEntryWithDictionary:context:;
@end
