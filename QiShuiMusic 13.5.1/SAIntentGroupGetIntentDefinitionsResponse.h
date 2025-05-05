@interface SAIntentGroupGetIntentDefinitionsResponse : SABaseCommand
@property (nonatomic) NSArray intentDefinitionInfos;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)intentDefinitionInfos;
- (void)setIntentDefinitionInfos:;
+ (id)getIntentDefinitionsResponse;
+ (id)getIntentDefinitionsResponseWithDictionary:context:;
@end
