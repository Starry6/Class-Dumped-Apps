@interface MTLReversibleValueTransformer : MTLValueTransformer
- (id)reverseTransformedValue:;
- (id)reverseTransformedValue:success:error:;
- (id)initWithForwardBlock:reverseBlock:;
+ (BOOL)allowsReverseTransformation;
@end
