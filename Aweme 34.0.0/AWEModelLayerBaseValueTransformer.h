@interface AWEModelLayerBaseValueTransformer : NSValueTransformer
@property (nonatomic) @? transformBlock;
@property (nonatomic) @? reverseTransformBlock;
- (id)transformedValue:forKey:extra:;
- (id)reverseTransformedValue:forKey:;
- (id)reverseTransformedValue:;
- (void).cxx_destruct;
- (id)transformedValue:;
- (void)setTransformBlock:;
- (id)transformBlock;
- (id)reverseTransformBlock;
- (void)setReverseTransformBlock:;
+ (id)transformerWithTransformBlock:reverseTransformBlock:;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;
@end
