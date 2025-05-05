@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry
@property (nonatomic) NSNumber value;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)keyValueNumericEntry;
+ (id)keyValueNumericEntryWithDictionary:context:;
@end
