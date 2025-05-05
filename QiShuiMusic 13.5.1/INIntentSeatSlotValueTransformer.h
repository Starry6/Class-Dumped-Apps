@interface INIntentSeatSlotValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (long long)_intents_valueType;
+ (Class)transformedValueClass;
@end
