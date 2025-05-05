@interface VSOpusDecoder : NSObject
- (void)dealloc;
- (id)_opusDecoder:;
- (id)decodeChunks:streamDescription:outError:;
- (id)beginChunkDecoderForStreamDescription:;
- (void)endChunkDecoding;
- (id)decodeChunk:outError:;
+ (id)sharedInstance;
@end
