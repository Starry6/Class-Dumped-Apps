@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry
@property (nonatomic) NSData value;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)keyValueBlobEntry;
+ (id)keyValueBlobEntryWithDictionary:context:;
@end
