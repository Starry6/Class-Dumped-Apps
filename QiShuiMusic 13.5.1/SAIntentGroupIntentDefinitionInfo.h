@interface SAIntentGroupIntentDefinitionInfo : AceObject
@property (nonatomic) NSData intentDefinition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)intentDefinition;
- (void)setIntentDefinition:;
+ (id)intentDefinitionInfo;
+ (id)intentDefinitionInfoWithDictionary:context:;
@end
