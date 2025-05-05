@interface MRMutableAudioDataBlock : MRAudioDataBlock
@property (nonatomic) MRAudioBuffer buffer;
@property (nonatomic) {?=dd} time;
@property (nonatomic) float gain;
- (void)setBuffer:;
- (void)setTime:;
- (void)setGain:;
@end
