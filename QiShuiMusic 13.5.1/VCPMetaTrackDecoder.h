@interface VCPMetaTrackDecoder : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithTrack:;
- (id)copyNextMetadataGroup;
@end
