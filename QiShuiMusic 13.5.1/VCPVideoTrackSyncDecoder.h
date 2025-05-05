@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder
- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;
- (id)copyNextSampleBuffer;
- (id)initWithTrack:timerange:;
- (int)findNextSample:timerange:;
- (int)decodeSample:sample:;
- (void)decodeTask;
@end
