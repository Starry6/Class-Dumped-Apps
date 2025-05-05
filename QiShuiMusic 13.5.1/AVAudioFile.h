@interface AVAudioFile : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) AVAudioFormat fileFormat;
@property (nonatomic) AVAudioFormat processingFormat;
@property (nonatomic) q length;
@property (nonatomic) q framePosition;
- (id)url;
- (void)dealloc;
- (id)initForWriting:settings:error:;
- (id)processingFormat;
- (long long)length;
- (id)fileFormat;
- (BOOL)writeFromBuffer:error:;
- (id)initForReading:error:;
- (id)initForReading:commonFormat:interleaved:error:;
- (id)initForReadingFromExtAudioFile:error:;
- (id)initForReadingFromExtAudioFile:commonFormat:interleaved:error:;
- (id)initForWriting:settings:commonFormat:interleaved:error:;
- (id)initSecondaryReader:format:error:;
- (BOOL)readIntoBuffer:error:;
- (BOOL)readIntoBuffer:frameCount:error:;
- (long long)framePosition;
- (void)setFramePosition:;
@end
