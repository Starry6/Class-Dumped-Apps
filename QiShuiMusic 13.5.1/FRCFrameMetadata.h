@interface FRCFrameMetadata : NSObject
@property (nonatomic) Q ptsInNanos;
@property (nonatomic) Q originalPTSInNanos;
@property (nonatomic) Q sequenceAdjusterRecipe;
@property (nonatomic) q sequenceAdjusterDisplacement;
- (void)setOriginalPTSInNanos:;
- (void)setPtsInNanos:;
- (void)setSequenceAdjusterDisplacement:;
- (void)setSequenceAdjusterRecipe:;
- (unsigned long long)ptsInNanos;
- (unsigned long long)originalPTSInNanos;
- (unsigned long long)sequenceAdjusterRecipe;
- (long long)sequenceAdjusterDisplacement;
@end
