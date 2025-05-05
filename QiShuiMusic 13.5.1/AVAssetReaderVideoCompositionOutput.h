@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
@property (nonatomic) NSArray videoTracks;
@property (nonatomic) NSDictionary videoSettings;
@property (nonatomic) AVVideoComposition videoComposition;
@property (nonatomic) <AVVideoCompositing> customVideoCompositor;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (BOOL)_enableTrackExtractionReturningError:;
- (id)description;
- (id)_asset;
- (id)videoComposition;
- (void)setVideoComposition:;
- (id)customVideoCompositor;
- (id)_errorForOSStatus:;
- (BOOL)alwaysCopiesSampleData;
- (BOOL)_prepareForReadingReturningError:;
- (id)_formatDescriptions;
- (id)videoTracks;
- (id)sampleDataTrackIDs;
- (id)initWithVideoTracks:videoSettings:;
- (id)videoSettings;
- (void)_setVideoComposition:;
- (void)_setVideoComposition:customVideoCompositorSession:;
- (id)_videoCompositionProcessorColorProperties;
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:videoSettings:;
@end
