@interface RACValueTransformer : NSValueTransformer
@property (nonatomic) @? transformBlock;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)transformBlock;
- (void)setTransformBlock:;
+ (BOOL)allowsReverseTransformation;
+ (id)transformerWithBlock:;
@end
