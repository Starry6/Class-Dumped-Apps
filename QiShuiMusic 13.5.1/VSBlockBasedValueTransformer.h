@interface VSBlockBasedValueTransformer : NSValueTransformer
@property (nonatomic) @? transformationBlock;
@property (nonatomic) @? reverseTransformationBlock;
- (id)init;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)reverseTransformedValue:;
- (id)transformationBlock;
- (void)setTransformationBlock:;
- (id)reverseTransformationBlock;
- (void)setReverseTransformationBlock:;
@end
