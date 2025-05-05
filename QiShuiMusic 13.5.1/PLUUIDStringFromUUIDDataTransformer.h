@interface PLUUIDStringFromUUIDDataTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
