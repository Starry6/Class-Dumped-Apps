@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand
@property (nonatomic) NSArray queries;
- (void)setQueries:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)queries;
- (BOOL)mutatingCommand;
+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:context:;
@end
