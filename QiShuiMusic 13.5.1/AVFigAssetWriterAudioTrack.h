@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack
- (void)dealloc;
- (BOOL)_flushPendingSampleBuffersReturningError:;
- (id)initWithFigAssetWriter:mediaType:mediaFileType:formatSpecification:sourcePixelBufferAttributes:multiPass:error:;
- (BOOL)markEndOfDataReturningError:;
- (BOOL)addSampleBuffer:error:;
- (int)_attachToFigAssetWriterUsingFormatSpecification:sourcePixelBufferAttributes:multiPass:error:;
- (void)prepareToEndSession;
@end
