@interface SAAnswerDefinitionVariation : AceObject
@property (nonatomic) NSArray examples;
@property (nonatomic) NSString variation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)variation;
- (void)setVariation:;
- (id)examples;
- (void)setExamples:;
+ (id)definitionVariation;
+ (id)definitionVariationWithDictionary:context:;
@end
