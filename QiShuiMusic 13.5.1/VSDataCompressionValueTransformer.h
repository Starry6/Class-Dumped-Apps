@interface VSDataCompressionValueTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)reverseTransformedValue:;
- (id)_dataByPerformingOperation:onData:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@end
