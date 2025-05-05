@interface SAKnowledgeGraphTriple : AceObject
@property (nonatomic) float confidence;
@property (nonatomic) NSString object;
@property (nonatomic) NSString predicate;
@property (nonatomic) NSString storeName;
@property (nonatomic) NSString subject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)confidence;
- (void)setObject:;
- (id)subject;
- (void)setConfidence:;
- (id)groupIdentifier;
- (void)setSubject:;
- (id)predicate;
- (id)storeName;
- (void)setPredicate:;
- (id)encodedClassName;
- (void)setStoreName:;
- (id)object;
+ (id)graphTriple;
+ (id)graphTripleWithDictionary:context:;
@end
