@interface VSReverseValueTransformer : NSValueTransformer
@property (nonatomic) NSValueTransformer valueTransformer;
- (void)setValueTransformer:;
- (id)init;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)valueTransformer;
- (id)reverseTransformedValue:;
- (id)initWithValueTransformer:;
+ (id)reverseValueTransformerWithValueTransformer:;
@end
