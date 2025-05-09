@interface PHMediaFormatConversionRequest : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) PHMediaFormatConversionSource source;
@property (nonatomic) PFMediaCapabilities destinationCapabilities;
@property (nonatomic) PHMediaFormatConversionCompositeRequest parentRequest;
@property (nonatomic) NSString statusString;
@property (nonatomic) BOOL requiresFormatConversion;
@property (nonatomic) BOOL requiresPassthroughConversion;
@property (nonatomic) BOOL requiresMetadataChanges;
@property (nonatomic) BOOL isCompositeRequest;
@property (nonatomic) NSProgress progress;
@property (nonatomic) NSURL directoryForTemporaryFiles;
@property (nonatomic) q transferBehaviorUserPreference;
@property (nonatomic) @? singlePassVideoConversionUpdateHandler;
@property (nonatomic) BOOL requiresSinglePassVideoConversion;
@property (nonatomic) BOOL shouldExportAsHDR;
@property (nonatomic) double formatConversionExpansionFactor;
@property (nonatomic) q locationMetadataBehavior;
@property (nonatomic) CLLocation location;
@property (nonatomic) q creationDateMetadataBehavior;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSTimeZone creationDateTimeZone;
@property (nonatomic) q captionMetadataBehavior;
@property (nonatomic) NSString caption;
@property (nonatomic) q accessibilityDescriptionMetadataBehavior;
@property (nonatomic) NSString accessibilityDescription;
@property (nonatomic) q passthroughConversionAdditionalByteCount;
@property (nonatomic) q status;
@property (nonatomic) BOOL preflighted;
@property (nonatomic) NSError error;
@property (nonatomic) PHMediaFormatConversionDestination destination;
@property (nonatomic) q backwardsCompatibilityStatus;
@property (nonatomic) Q estimatedOutputFileLength;
@property (nonatomic) q livePhotoPairingIdentifierBehavior;
@property (nonatomic) NSString livePhotoPairingIdentifier;
@property (nonatomic) BOOL forceFormatConversion;
@property (nonatomic) BOOL shouldPadOutputFileToEstimatedLength;
@property (nonatomic) BOOL shouldStripLocation;
@property (nonatomic) NSString outputFilename;
@property (nonatomic) NSString outputPathExtension;
@property (nonatomic) NSString outputFileType;
@property (nonatomic) BOOL useTransferBehaviorUserPreference;
@property (nonatomic) @ userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (void)setDestination:;
- (id)init;
- (id)userInfo;
- (void)setDirectoryForTemporaryFiles:;
- (id)accessibilityDescription;
- (BOOL)prepareWithError:;
- (void)setError:;
- (void)setProgress:;
- (id)identifier;
- (void)setOutputFilename:;
- (id)destination;
- (id)caption;
- (id)error;
- (id)outputFileType;
- (id)statusString;
- (id)location;
- (id)progress;
- (id)directoryForTemporaryFiles;
- (id)outputFilename;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (long long)status;
- (void)setSource:;
- (id)livePhotoPairingIdentifier;
- (id)creationDate;
- (unsigned long long)estimatedOutputFileLength;
- (void)markAsCancelled;
- (void)setCaptionMetadataBehavior:withCaption:;
- (void)setAccessibilityDescriptionMetadataBehavior:withAccessibilityDescription:;
- (void)setCreationDateMetadataBehavior:withCreationDate:inTimeZone:;
- (long long)backwardsCompatibilityStatus;
- (void)setLivePhotoPairingIdentifier:;
- (void)setLivePhotoPairingIdentifierBehavior:;
- (void)setLocationMetadataBehavior:withLocation:;
- (BOOL)shouldStripLocation;
- (void)setShouldStripLocation:;
- (void)setForceFormatConversion:;
- (void)setShouldPadOutputFileToEstimatedLength:;
- (void)setUseTransferBehaviorUserPreference:;
- (id)outputPathExtension;
- (BOOL)requiresSinglePassVideoConversion;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:;
- (id)parentRequest;
- (BOOL)preflighted;
- (void)setPreflighted:;
- (BOOL)isCompositeRequest;
- (void)setupProgress;
- (void)preflightWithConversionManager:;
- (BOOL)requiresPassthroughConversion;
- (BOOL)sourceSupportsPassthroughConversion;
- (BOOL)requiresMetadataChanges;
- (BOOL)requiresLivePhotoPairingIdentifierChange;
- (BOOL)requiresLocationMetadataChange;
- (BOOL)requiresCreationDateMetadataChange;
- (BOOL)requiresCaptionMetadataChange;
- (BOOL)requiresAccessibilityDescriptionMetadataChange;
- (BOOL)requiresFormatConversion;
- (BOOL)_calculateRequiresFormatConversion;
- (BOOL)destinationCapabilitiesHintsIndicateSupportForSource;
- (BOOL)userPreferenceProhibitsFormatConversion;
- (void)setFormatConversionExpansionFactor:;
- (double)formatConversionExpansionFactor;
- (long long)passthroughConversionAdditionalByteCount;
- (void)padOutputFileToEstimatedLength;
- (void)didFinishProcessing;
- (void)updateSinglePassVideoConversionStatus:addedRange:error:;
- (long long)livePhotoPairingIdentifierBehavior;
- (BOOL)forceFormatConversion;
- (BOOL)shouldPadOutputFileToEstimatedLength;
- (BOOL)useTransferBehaviorUserPreference;
- (id)destinationCapabilities;
- (void)setDestinationCapabilities:;
- (void)setParentRequest:;
- (long long)transferBehaviorUserPreference;
- (void)setTransferBehaviorUserPreference:;
- (id)singlePassVideoConversionUpdateHandler;
- (void)setSinglePassVideoConversionUpdateHandler:;
- (void)setRequiresSinglePassVideoConversion:;
- (BOOL)shouldExportAsHDR;
- (void)setShouldExportAsHDR:;
- (long long)locationMetadataBehavior;
- (long long)creationDateMetadataBehavior;
- (id)creationDateTimeZone;
- (long long)captionMetadataBehavior;
- (long long)accessibilityDescriptionMetadataBehavior;
- (void)setPassthroughConversionAdditionalByteCount:;
+ (BOOL)hasInternalDiagnostics;
+ (id)requestForSource:destinationCapabilities:error:;
+ (id)stringForRequestStatus:;
+ (double)heifToJPEGFactorWithImageDimensions:fileLength:;
+ (double)bitsPerPixelWithImageDimensions:fileLength:;
+ (double)heifToJPEGFactorForBitsPerPixel:;
@end
