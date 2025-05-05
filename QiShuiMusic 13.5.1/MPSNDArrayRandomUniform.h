@interface MPSNDArrayRandomUniform : MPSNDArrayRandom
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
@property (nonatomic) q minimumInteger;
@property (nonatomic) q maximumInteger;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (float)minimum;
- (float)maximum;
- (void)setMinimum:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setMaximum:;
- (void)setMaximumInteger:;
- (void)setMinimumInteger:;
- (id)initWithDevice:minimum:maximum:;
- (id)initWithDevice:minimumInteger:maximumInteger:;
- (long long)minimumInteger;
- (long long)maximumInteger;
@end
