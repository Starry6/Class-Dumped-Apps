@interface VSJSONDataValueTransformer : NSValueTransformer
- (id)transformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
