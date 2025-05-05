@interface SAIntentGroupSiriKitParameterMetadata : AceObject
@property (nonatomic) NSArray confirmationStates;
@property (nonatomic) NSString parameterName;
@property (nonatomic) BOOL shouldResolve;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)parameterName;
- (id)encodedClassName;
- (id)confirmationStates;
- (void)setConfirmationStates:;
- (void)setParameterName:;
- (BOOL)shouldResolve;
- (void)setShouldResolve:;
+ (id)siriKitParameterMetadata;
+ (id)siriKitParameterMetadataWithDictionary:context:;
@end
