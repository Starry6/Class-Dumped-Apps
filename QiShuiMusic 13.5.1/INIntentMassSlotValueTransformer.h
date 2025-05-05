@interface INIntentMassSlotValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;
+ (Class)_intents_resolutionResultClass;
+ (Class)transformedValueClass;
@end
