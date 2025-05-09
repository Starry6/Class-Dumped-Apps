@interface AVAssetWriterInput : NSObject
@property (nonatomic) q numberOfAppendFailures;
@property (nonatomic) BOOL markAsFinishedCalled;
@property (nonatomic) AVAssetWriterInputHelper helper;
@property (nonatomic) NSDictionary sourcePixelBufferAttributes;
@property (nonatomic) ^{__CVPixelBufferPool=} pixelBufferPool;
@property (nonatomic) AVOutputSettings outputSettingsObject;
@property (nonatomic) q status;
@property (nonatomic) BOOL attachedToAdaptor;
@property (nonatomic) AVWeakReference weakReferenceToAssetWriter;
@property (nonatomic) s alternateGroupID;
@property (nonatomic) s provisionalAlternateGroupID;
@property (nonatomic) NSDictionary trackReferences;
@property (nonatomic) NSString mediaType;
@property (nonatomic) NSDictionary outputSettings;
@property (nonatomic) r^{opaqueCMFormatDescription=} sourceFormatHint;
@property (nonatomic) NSArray metadata;
@property (nonatomic) BOOL readyForMoreMediaData;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mediaType;
- (id)initWithMediaType:outputSettings:sourceFormatHint:;
- (void)setPreferredMediaChunkDuration:;
- (BOOL)canPerformMultiplePasses;
- (void)addTrackAssociationWithTrackOfInput:type:;
- (void)setLayer:;
- (void)setMarksOutputTrackAsEnabled:;
- (id)init;
- (void)setPreferredMediaChunkAlignment:;
- (void)_didStartInitialSession;
- (void)addCallbackToCancelDuringDeallocation:;
- (void)setMaximizePowerEfficiency:;
- (long long)_appendSampleBuffer:error:;
- (id)naturalSize;
- (id)extendedLanguageTag;
- (void)dealloc;
- (void)_setAlternateGroupID:;
- (BOOL)_prepareForWritingWithFigAssetWriter:mediaFileType:error:;
- (void)setMediaTimeScale:;
- (id)currentPassDescription;
- (void)setLanguageCode:;
- (id)sourceFormatHint;
- (id)outputSettings;
- (long long)preferredMediaChunkSize;
- (id)_pixelBufferPool;
- (void)setExtendedLanguageTag:;
- (void)respondToEachPassDescriptionOnQueue:usingBlock:;
- (void)setPreferredMediaChunkSize:;
- (id)languageCode;
- (void)setPerformsMultiPassEncodingIfSupported:;
- (void)declareKeyPathDependenciesWithRegistry:;
- (BOOL)isReadyForMoreMediaData;
- (void)setSampleReferenceBaseURL:;
- (void)setNaturalSize:;
- (int)outputTrackID;
- (BOOL)writesMediaDataToBeginningOfFile;
- (id)associatedInputsWithTrackAssociationType:;
- (void)_setAttachedAdaptor:;
- (void)setTransform:;
- (BOOL)_appendPixelBuffer:withPresentationTime:;
- (id)metadata;
- (BOOL)marksOutputTrackAsEnabled;
- (BOOL)performsMultiPassEncodingIfSupported;
- (long long)layer;
- (BOOL)canAddTrackAssociationWithTrackOfInput:type:;
- (void)markCurrentPassAsFinished;
- (void)setPreferredVolume:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (BOOL)_isAttachedToAdaptor;
- (void)requestMediaDataWhenReadyOnQueue:usingBlock:;
- (BOOL)maximizePowerEfficiency;
- (void)_setWeakReferenceToAssetWriter:;
- (id)initWithMediaType:outputSettings:;
- (BOOL)_prepareToFinishWritingReturningError:;
- (void)setMediaDataLocation:;
- (void)stopRequestingMediaData;
- (void)setMetadata:;
- (id)_sourcePixelBufferAttributes;
- (id)sampleReferenceBaseURL;
- (void)_setProvisionalAlternateGroupID:;
- (short)_provisionalAlternateGroupID;
- (int)mediaTimeScale;
- (void)markAsFinished;
- (id)_weakReferenceToAssetWriter;
- (id)transform;
- (BOOL)appendSampleBuffer:;
- (short)_alternateGroupID;
- (BOOL)_markAsFinishedCalled;
- (void)setWritesMediaDataToBeginningOfFile:;
- (long long)numberOfAppendFailures;
- (long long)_status;
- (float)preferredVolume;
- (id)description;
- (id)preferredMediaChunkDuration;
- (id)_trackReferences;
- (long long)preferredMediaChunkAlignment;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:;
- (void)_setSourcePixelBufferAttributes:;
- (void)_setHelper:;
- (id)_attachedAdaptor;
- (BOOL)expectsMediaDataInRealTime;
- (void)_transitionToTerminalStatus:;
- (void)_prepareToEndSession;
- (id)_helper;
- (id)_outputSettingsObject;
- (void)setExpectsMediaDataInRealTime:;
- (id)mediaDataLocation;
- (id)availableTrackAssociationTypes;
+ (id)assetWriterInputWithMediaType:outputSettings:sourceFormatHint:;
+ (id)assetWriterInputWithMediaType:outputSettings:;
@end
