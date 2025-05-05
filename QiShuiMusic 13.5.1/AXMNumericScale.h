@interface AXMNumericScale : AXMScale
@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;
@property (nonatomic) @? apply;
@property (nonatomic) @? invert;
- (id)init;
- (id)apply;
- (void).cxx_destruct;
- (id)invert;
- (double)lowerBound;
- (double)upperBound;
- (void)setLowerBound:;
- (void)setUpperBound:;
- (id)initWithLowerBound:upperBound:apply:invert:;
- (void)setApply:;
- (void)setInvert:;
+ (id)linearScaleWithLowerBound:upperBound:;
+ (id)log10ScaleWithLowerBound:upperBound:;
+ (id)lnScaleWithLowerBound:upperBound:;
@end
