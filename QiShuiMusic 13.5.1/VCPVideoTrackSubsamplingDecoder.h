@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder
- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;
- (id)copyNextSampleBuffer;
- (id)initWithTrack:timerange:atInterval:;
- (id)getNextCaptureSampleBuffer;
@end
