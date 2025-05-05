@interface MPGaplessInfo : NSObject
@property (nonatomic) Q durationInFrames;
@property (nonatomic) I encodingDelayInFrames;
@property (nonatomic) I encodingDrainInFrames;
@property (nonatomic) I heuristicInfo;
@property (nonatomic) Q lastPacketsResync;
- (unsigned long long)durationInFrames;
- (void)setDurationInFrames:;
- (unsigned int)encodingDelayInFrames;
- (void)setEncodingDelayInFrames:;
- (unsigned int)encodingDrainInFrames;
- (void)setEncodingDrainInFrames:;
- (unsigned int)heuristicInfo;
- (void)setHeuristicInfo:;
- (unsigned long long)lastPacketsResync;
- (void)setLastPacketsResync:;
@end
