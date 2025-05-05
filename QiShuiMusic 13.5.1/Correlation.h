@interface Correlation : NSObject
@property (nonatomic) BOOL useSIMDShuffle;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupMetal;
- (id)initWithDevice:interleaved:;
- (void)setUseSIMDShuffle:;
- (void)calcCorrelation:with:output:;
- (void)encodeToCommandBuffer:first:second:destination:;
- (BOOL)useSIMDShuffle;
@end
