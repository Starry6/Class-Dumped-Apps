@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore
- (id)plistForEncoding;
- (void).cxx_destruct;
- (id)_makeGPSProperties;
- (id)initWithImageCaptureMovieProperties:contentType:timeZoneLookup:;
- (id)livePhotoPairingIdentifier;
- (BOOL)configureWithMetadataPlist:;
- (BOOL)isSloMo;
- (BOOL)isTimelapse;
- (id)durationTimeInterval;
- (id)originalFilenamee;
@end
