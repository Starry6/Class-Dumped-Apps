@interface FigAlternateObjC : FigKVCInspectable
@property (nonatomic) double peakBitRate;
@property (nonatomic) double averageBitRate;
@property (nonatomic) FigAlternateObjCVideoAttributes videoAttributes;
@property (nonatomic) FigAlternateObjCAudioAttributes audioAttributes;
@property (nonatomic) ^{OpaqueFigAlternate=} figAlternate;
- (void)dealloc;
- (id)initWithFigAlternate:;
- (id)videoAttributes;
- (id)audioAttributes;
- (double)peakBitRate;
- (double)averageBitRate;
- (id)figAlternate;
+ (id)dummy;
@end
