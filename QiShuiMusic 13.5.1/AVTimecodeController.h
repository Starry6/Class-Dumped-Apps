@interface AVTimecodeController : NSObject
@property (nonatomic) AVAssetTrack timecodeTrack;
@property (nonatomic) {?=qiIq} observationInterval;
- (id)maxFrameCountString;
- (void).cxx_destruct;
- (id)initWithTimecodeTrack:videoTrack:;
- (void)calculateMaxFrameAndTimecode;
- (id)maxTimecodeString;
- (long long)calculateFrameNumberAtCMTime:;
- (id)calculateTimecodeAtFrame:;
- (long long)calculateFrameNumberAtTimecode:;
- (id)timecodeForFrameNumber32UsingFormatDescription:timecodeStartFrame:;
- (id)timecodeForFrameNumber64UsingCachedDescription:;
- (long long)offsetFor:fromTimecode:;
- (id)timecodeForOffset:from:timecode:;
- (long long)calculateFrameNumberAtTimeInterval:;
- (double)timeIntervalForFrameNumber:;
- (void)cacheTimecodeDescriptionForSampleBuffer:;
- (BOOL)validateCMTime:;
- (BOOL)readTimecodes;
- (BOOL)timecodeAvailable;
- (id)timecodeTrack;
- (void)setTimecodeTrack:;
- (id)observationInterval;
@end
