@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject
@property (nonatomic) NSString entity;
@property (nonatomic) NSString verb;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEntity:;
- (id)entity;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)verb;
- (void)setVerb:;
+ (id)getIntentDefinitionsIntentDefinitionQuery;
+ (id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:context:;
@end
