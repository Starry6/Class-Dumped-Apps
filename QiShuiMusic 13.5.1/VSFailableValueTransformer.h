@interface VSFailableValueTransformer : NSValueTransformer
@property (nonatomic) NSValueTransformer objectValueTransformer;
- (id)transformedValue:;
- (void).cxx_destruct;
- (id)objectValueTransformer;
- (void)setObjectValueTransformer:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
