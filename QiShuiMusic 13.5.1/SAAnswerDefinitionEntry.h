@interface SAAnswerDefinitionEntry : AceObject
@property (nonatomic) NSString definition;
@property (nonatomic) NSArray examples;
@property (nonatomic) NSArray variations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)definition;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)examples;
- (void)setExamples:;
- (id)variations;
- (void)setDefinition:;
- (void)setVariations:;
+ (id)definitionEntry;
+ (id)definitionEntryWithDictionary:context:;
@end
