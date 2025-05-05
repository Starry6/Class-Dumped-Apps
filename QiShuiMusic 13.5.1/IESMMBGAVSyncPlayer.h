@interface IESMMBGAVSyncPlayer : IESMMBGAVPlayer
- (id)copyPixelBuffer;
- (void)clearVideoFrameCache;
- (id)copyPixelBuffer:;
- (id)copyPixelBufferInterval:;
- (void)decodeNextPixelBuffer;
- (void)forcePause:;
- (void)seekToTime:completeBlock:;
- (void)dealloc;
- (void)play;
- (void).cxx_destruct;
- (void)pause;
- (id).cxx_construct;
@end
