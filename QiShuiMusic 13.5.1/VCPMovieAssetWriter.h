@interface VCPMovieAssetWriter : NSObject
@property (nonatomic) q status;
- (void)cancel;
- (void)dealloc;
- (int)finish;
- (void).cxx_destruct;
- (long long)status;
- (id).cxx_construct;
- (id)initWithURL:andTrack:andBitrate:;
- (void)pushSample:;
- (id)popSample;
- (void)pushLivePhotoInfoSample:;
- (id)popLivePhotoInfoSample;
- (int)dispatchEncoding;
- (int)copyPixelBuffer:toPixelBuffer:;
- (int)addPixelBuffer:withTime:withAttachment:;
- (int)addLivePhotoInfoBuffer:;
- (void)updateStillPTS:;
- (int)setupMetadataTrack;
- (int)setupAudioTrack;
- (int)setupVideoTrack:;
- (int)appendMetadataTrack;
- (int)processStillImageMetadataTrack;
- (int)processLivePhotoInfoMetadataTrack;
- (int)passthroughMetadataTrackFrom:to:;
+ (id)assetWriterWithURL:andTrack:andBitrate:;
@end
