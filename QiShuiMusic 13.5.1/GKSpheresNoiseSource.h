@interface GKSpheresNoiseSource : GKNoiseSource
@property (nonatomic) double frequency;
- (id)init;
- (double)frequency;
- (void)setFrequency:;
- (id)initWithFrequency:;
- (double)valueAt:;
- (id)cloneModule;
+ (id)spheresNoiseWithFrequency:;
@end
