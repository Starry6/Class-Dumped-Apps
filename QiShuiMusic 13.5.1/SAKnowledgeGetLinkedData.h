@interface SAKnowledgeGetLinkedData : SABaseClientBoundCommand
@property (nonatomic) NSString sparqlQuery;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)sparqlQuery;
- (void)setSparqlQuery:;
+ (id)getLinkedData;
+ (id)getLinkedDataWithDictionary:context:;
@end
