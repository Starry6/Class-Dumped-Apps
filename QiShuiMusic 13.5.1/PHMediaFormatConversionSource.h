@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent
@property (nonatomic) {CGSize=dd} imageDimensions;
@property (nonatomic) BOOL preflighted;
@property (nonatomic) I firstVideoTrackCodec;
@property (nonatomic) BOOL containsVideoWithFormatEligibleForTranscoding;
@property (nonatomic) BOOL containsProResVideoWithFormatEligibleForTranscoding;
@property (nonatomic) BOOL containsHEVCVideo;
@property (nonatomic) BOOL containsHEIFImage;
@property (nonatomic) NSString livePhotoPairingIdentifier;
@property (nonatomic) BOOL didCheckForLivePhotoPairingIdentifier;
@property (nonatomic) BOOL didCheckForVideoWithFormatEligibleForTranscoding;
@property (nonatomic) q locationMetadataStatus;
@property (nonatomic) q captionMetadataStatus;
@property (nonatomic) q accessibilityDescriptionMetadataStatus;
@property (nonatomic) @ transcodingEligibleVideoTrackFormatDescription;
@property (nonatomic) NSString renderOriginatingSignature;
- (BOOL)isHDR;
- (id)imageDimensions;
- (void).cxx_destruct;
- (void)setImageDimensions:;
- (id)livePhotoPairingIdentifier;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:;
- (void)setLivePhotoPairingIdentifier:;
- (BOOL)containsProResVideoWithFormatEligibleForTranscoding;
- (unsigned int)firstVideoTrackCodec;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:codec:;
- (BOOL)preflightWithError:;
- (BOOL)determineMediaTypeFromPathExtensionWithError:;
- (void)checkForVideoEligibleForTranscoding;
- (BOOL)containsHEVCVideo;
- (void)checkForHEIFImage;
- (void)checkForLivePhotoPairingIdentifier;
- (BOOL)imageSourceMetadataByTraversingKeys:metadataValue:;
- (BOOL)valueExistsInDictionary:byTraversingKeys:value:;
- (void)checkForLocationData;
- (long long)imageSourceLocationMetadataStatus;
- (long long)videoSourceLocationMetadataStatus;
- (void)markLocationMetadataAsCheckedWithStatus:;
- (void)checkForCaptionData;
- (long long)imageSourceCaptionMetadataStatus;
- (long long)videoSourceCaptionMetadataStatus;
- (void)markCaptionMetadataAsCheckedWithStatus:;
- (void)checkForAccessibilityDescriptionData;
- (long long)imageSourceAccessibilityDescriptionMetadataStatus;
- (long long)videoSourceAccessibilityDescriptionMetadataStatus;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:;
- (id)renderOriginatingSignature;
- (void)setRenderOriginatingSignature:;
- (BOOL)preflighted;
- (void)setPreflighted:;
- (void)setFirstVideoTrackCodec:;
- (BOOL)containsVideoWithFormatEligibleForTranscoding;
- (void)setContainsVideoWithFormatEligibleForTranscoding:;
- (void)setContainsProResVideoWithFormatEligibleForTranscoding:;
- (BOOL)containsHEIFImage;
- (void)setContainsHEIFImage:;
- (BOOL)didCheckForLivePhotoPairingIdentifier;
- (void)setDidCheckForLivePhotoPairingIdentifier:;
- (BOOL)didCheckForVideoWithFormatEligibleForTranscoding;
- (void)setDidCheckForVideoWithFormatEligibleForTranscoding:;
- (long long)locationMetadataStatus;
- (void)setLocationMetadataStatus:;
- (long long)captionMetadataStatus;
- (void)setCaptionMetadataStatus:;
- (long long)accessibilityDescriptionMetadataStatus;
- (void)setAccessibilityDescriptionMetadataStatus:;
- (id)transcodingEligibleVideoTrackFormatDescription;
- (void)setTranscodingEligibleVideoTrackFormatDescription:;
+ (id)imageSourceForFileURL:;
+ (id)videoSourceForFileURL:;
+ (id)imageSourceForFileURL:dimensions:;
+ (Class)requestClass;
+ (id)sourceForFileURL:mediaType:imageDimensions:;
+ (id)sourceForFileURL:;
@end
