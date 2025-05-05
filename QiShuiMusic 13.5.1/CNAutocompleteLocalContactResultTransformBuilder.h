@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject
@property (nonatomic) Q builtContactType;
- (id)build;
- (void).cxx_destruct;
- (id)initWithResultFactory:;
- (void)addTransformForProperty:;
- (id)makeTransformForProperty:;
- (id)buildAggregateTransform;
- (unsigned long long)builtContactType;
- (void)setBuiltContactType:;
+ (id)localContactBuilderWithResultFactory:;
+ (id)suggestedContactBuilderWithResultFactory:;
+ (id)serverContactBuilderWithResultFactory:;
+ (long long)addressTypeForProperty:;
+ (id)resultValueForContactPropertyValue:propertyKey:contact:;
@end
