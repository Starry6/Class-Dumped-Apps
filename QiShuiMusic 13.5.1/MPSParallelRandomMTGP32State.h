@interface MPSParallelRandomMTGP32State : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
