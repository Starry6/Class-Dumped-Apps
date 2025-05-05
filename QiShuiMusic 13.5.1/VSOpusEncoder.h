@interface VSOpusEncoder : NSObject
@property (nonatomic) @? opusDataHandler;
@property (nonatomic) @? errorHandler;
@property (nonatomic) AVAudioFormat fromFormat;
@property (nonatomic) AVAudioFormat toFormat;
@property (nonatomic) AVAudioConverter converter;
@property (nonatomic) AVAudioCompressedBuffer outputBuffer;
@property (nonatomic) q opusDataOffset;
- (id)errorHandler;
- (void)setErrorHandler:;
- (void).cxx_destruct;
- (void)endEncoding;
- (id)converter;
- (id)outputBuffer;
- (void)setOutputBuffer:;
- (id)initWithSourceASBD:;
- (void)setOpusDataHandler:;
- (void)beginEncoding;
- (void)encodeChunk:;
- (id)opusDataHandler;
- (id)fromFormat;
- (void)setFromFormat:;
- (id)toFormat;
- (void)setToFormat:;
- (void)setConverter:;
- (long long)opusDataOffset;
- (void)setOpusDataOffset:;
@end
