@interface BWFrameRateGovernorNode : BWNode
- (id)init;
- (void)setPreservesMotionDataFromDroppedFrames:;
- (void)dealloc;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (void)setDropsStartupFramesWithUnstableAE:;
@end
