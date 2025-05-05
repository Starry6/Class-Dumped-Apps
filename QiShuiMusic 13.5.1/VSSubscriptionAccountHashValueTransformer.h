@interface VSSubscriptionAccountHashValueTransformer : NSValueTransformer
- (id)transformedValue:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
