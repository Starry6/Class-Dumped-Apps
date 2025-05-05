@interface AVAssetReaderTrackOutput : AVAssetReaderOutput
@property (nonatomic) BOOL attachedToAdaptor;
@property (nonatomic) AVAssetTrack track;
@property (nonatomic) NSDictionary outputSettings;
@property (nonatomic) NSString audioTimePitchAlgorithm;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (id)outputSettings;
- (void)_setAttachedAdaptor:;
- (BOOL)_isAttachedToAdaptor;
- (id)audioTimePitchAlgorithm;
- (BOOL)_enableTrackExtractionReturningError:;
- (void)setAudioTimePitchAlgorithm:;
- (id)description;
- (id)_asset;
- (id)_attachedAdaptor;
- (void)setAppliesPreferredTrackTransform:;
- (id)copyNextSampleBuffer;
- (BOOL)appliesPreferredTrackTransform;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_trimsSampleDurations;
- (id)track;
- (id)initWithTrack:outputSettings:;
- (id)_copyNextSampleBufferForAdaptor;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
+ (id)assetReaderTrackOutputWithTrack:outputSettings:;
@end
