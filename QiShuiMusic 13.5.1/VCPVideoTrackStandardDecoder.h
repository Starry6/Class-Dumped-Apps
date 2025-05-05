@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder
- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;
- (id)copyNextSampleBuffer;
- (id)initWithTrack:timerange:;
- (id)initWithTrack:timerange:withSettings:applyTransform:;
@end
