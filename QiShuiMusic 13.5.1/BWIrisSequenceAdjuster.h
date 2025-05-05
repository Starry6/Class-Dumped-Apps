@interface BWIrisSequenceAdjuster : NSObject
@property (nonatomic) NSInteger audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
@property (nonatomic) {?=qiIq} masterMovieOriginalStartTime;
@property (nonatomic) BOOL readyToReleaseAudio;
@property (nonatomic) Q maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
- (void)dealloc;
- (unsigned long long)maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
- (void)setMasterMovieOriginalStartTime:;
- (id)masterMovieOriginalStartTime;
- (id)adjustedTimeForTime:;
- (void)enqueueVideoBufferTime:nativeTime:isBracketFrame:isSISFrame:;
- (id)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:;
- (void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:;
- (int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
- (void)enqueueSampleBuffer:forMediaTypeWithIndex:;
- (void)adjustMovieInfoTimes:;
- (id)adjustedTimeForStillImageTime:;
- (void)reset;
- (id)audioOffsetForOriginalStillImageTime:;
- (BOOL)readyToReleaseAudio;
- (id)initWithMediaTypes:visMotionMetadataPreloadingEnabled:generateIFrames:;
- (BOOL)discontinuityExistsBetweenCurrentPTS:previousPTS:;
@end
