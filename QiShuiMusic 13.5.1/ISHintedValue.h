@interface ISHintedValue : NSObject
@property (nonatomic) NSMutableArray dimensions;
@property (nonatomic) NSMutableArray values;
@property (nonatomic) Q options;
- (id)dimensions;
- (void)setOptions:;
- (id)init;
- (id)initWithOptions:;
- (id)values;
- (unsigned long long)options;
- (void).cxx_destruct;
- (long long)indexForSize:;
- (void)addHintedValue:forSize:;
- (id)hintedValueForSize:;
- (id)hintedValueForIndex:;
- (BOOL)sizeOutsideHintedRange:;
- (double)scaleFactorForSize:;
- (double)interpolationFactorForSize:;
@end
