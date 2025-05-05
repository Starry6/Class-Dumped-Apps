@interface TSAudioTimeErrorCalculator : NSObject
@property (nonatomic) NSArray audioTimeErrors;
@property (nonatomic) NSArray timeErrors;
- (void)dealloc;
- (id)initWithChannelA:andChannelB:ofLength:withInterval:correlationLength:upscaleFactor:atSamplingRate:;
- (id)initWithChannelA:andChannelB:ofLength:withInterval:correlationLength:upscaleFactor:atSamplingRate:correlationType:;
- (id)initNoCopyWithChannelA:andChannelB:ofLength:withInterval:correlationLength:upscaleFactor:atSamplingRate:;
- (id)initNoCopyWithChannelA:andChannelB:ofLength:withInterval:correlationLength:upscaleFactor:atSamplingRate:correlationType:;
- (void)_processTimeErrorFromStartOffset:atIndex:withCount:;
- (void)calculateTimeError;
- (void)calculateTimeErrorWithThreadingOption:;
- (void)calculateTimeErrorFromStartOffset:toEndOffset:;
- (void)calculateTimeErrorFromStartOffset:toEndOffset:withThreadingOption:;
- (id)audioTimeErrors;
- (id)timeErrors;
- (BOOL)exportTimeErrorToDirectoryURL:;
- (BOOL)exportTimeErrorToDirectoryURL:withFilename:;
- (BOOL)exportTimeErrorToPath:;
@end
