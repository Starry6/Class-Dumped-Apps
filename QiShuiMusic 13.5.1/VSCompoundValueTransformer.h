@interface VSCompoundValueTransformer : NSValueTransformer
@property (nonatomic) NSArray valueTransformers;
- (id)init;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)reverseTransformedValue:;
- (id)valueTransformers;
- (void)setValueTransformers:;
@end
