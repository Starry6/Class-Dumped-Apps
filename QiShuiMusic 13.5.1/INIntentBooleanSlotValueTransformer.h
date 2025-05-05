@interface INIntentBooleanSlotValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
@end
