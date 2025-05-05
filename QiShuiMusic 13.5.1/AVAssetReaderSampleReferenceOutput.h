@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput
@property (nonatomic) AVAssetTrack track;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (BOOL)_enableTrackExtractionReturningError:;
- (id)description;
- (id)_asset;
- (BOOL)_trimsSampleDurations;
- (id)track;
- (id)initWithTrack:;
+ (id)assetReaderSampleReferenceOutputWithTrack:;
@end
