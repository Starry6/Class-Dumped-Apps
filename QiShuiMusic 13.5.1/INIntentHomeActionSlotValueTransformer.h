@interface INIntentHomeActionSlotValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
@end
