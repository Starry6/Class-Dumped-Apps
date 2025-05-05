@interface VCPVideoTrackDecoder : NSObject
- (id)init;
- (id)settings;
- (void).cxx_destruct;
- (long long)status;
- (id)copyNextSampleBuffer;
- (id)initWithTrack:;
- (id)getNextCaptureSampleBuffer;
- (BOOL)validateDecodedFrame:withSettings:;
+ (id)decodeDimensionsForTrack:;
@end
