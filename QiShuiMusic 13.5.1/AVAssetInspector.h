@interface AVAssetInspector : AVFigObjectInspector
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) float preferredRate;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredSoundCheckVolumeNormalization;
@property (nonatomic) {CGAffineTransform=dddddd} preferredTransform;
@property (nonatomic) {?=qiIq} minimumTimeOffsetFromLive;
@property (nonatomic) {CGSize=dd} naturalSize;
@property (nonatomic) NSInteger naturalTimeScale;
@property (nonatomic) BOOL providesPreciseDurationAndTiming;
@property (nonatomic) q trackCount;
@property (nonatomic) NSArray trackIDs;
@property (nonatomic) NSArray alternateTrackGroups;
@property (nonatomic) NSDictionary trackReferences;
@property (nonatomic) NSArray mediaSelectionGroupDictionaries;
@property (nonatomic) AVMetadataItem creationDate;
@property (nonatomic) NSString lyrics;
@property (nonatomic) NSArray commonMetadata;
@property (nonatomic) NSArray availableMetadataFormats;
@property (nonatomic) BOOL playable;
@property (nonatomic) BOOL exportable;
@property (nonatomic) BOOL readable;
@property (nonatomic) BOOL composable;
@property (nonatomic) BOOL compatibleWithSavedPhotosAlbum;
@property (nonatomic) BOOL compatibleWithAirPlayVideo;
@property (nonatomic) NSData SHA1Digest;
@property (nonatomic) BOOL canContainFragments;
@property (nonatomic) BOOL containsFragments;
@property (nonatomic) {?=qiIq} overallDurationHint;
@property (nonatomic) q firstFragmentSequenceNumber;
@property (nonatomic) q fragmentCount;
@property (nonatomic) @ propertyListForProxy;
@property (nonatomic) NSString identifyingTagClass;
@property (nonatomic) NSString identifyingTag;
@property (nonatomic) {CGSize=dd} maximumVideoResolution;
@property (nonatomic) NSArray availableVideoDynamicRanges;
@property (nonatomic) AVDisplayCriteria preferredDisplayCriteria;
@property (nonatomic) NSUUID httpSessionIdentifier;
@property (nonatomic) BOOL supportsAnalysisReporting;
@property (nonatomic) NSArray assetAnalysisMessages;
- (long long)trackCount;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isExportable;
- (long long)fragmentCount;
- (id)metadataForFormat:;
- (id)commonMetadata;
- (id)naturalSize;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (BOOL)canContainFragments;
- (BOOL)containsFragments;
- (id)preferredDisplayCriteria;
- (id)availableMetadataFormats;
- (BOOL)hasProtectedContent;
- (BOOL)isCompatibleWithAirPlayVideo;
- (id)_assetAnalysisMessages;
- (id)maximumVideoResolution;
- (BOOL)supportsAnalysisReporting;
- (id)identifyingTag;
- (id)minimumTimeOffsetFromLive;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (float)preferredRate;
- (id)identifyingTagClass;
- (id)SHA1Digest;
- (id)lyrics;
- (id)trackReferences;
- (id)trackIDs;
- (id)_mediaSelectionGroupDictionaries;
- (float)preferredVolume;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:;
- (int)naturalTimeScale;
- (id)overallDurationHint;
- (BOOL)isReadable;
- (id)makePropertyListForProxyWithOptions:;
- (float)preferredSoundCheckVolumeNormalization;
- (id)propertyListForProxy;
- (id)duration;
- (id)availableVideoDynamicRanges;
- (id)preferredTransform;
- (id)copyWithZone:;
- (id)alternateTrackGroups;
- (id)httpSessionIdentifier;
- (id)creationDate;
@end
