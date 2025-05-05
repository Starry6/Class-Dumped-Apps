@interface BWDeferredProcessingContainer : BWDeferredContainer
@property (nonatomic) I ageSeconds;
@property (nonatomic) Q sizeBytes;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) I processingCount;
@property (nonatomic) BWPhotoManifest photoManifest;
- (void)dealloc;
- (BOOL)isRemote;
- (id)photoManifest;
- (id)initWithApplicationID:captureRequestIdentifier:baseFolderURL:openForPeeking:err:;
- (id)initWithXPCEncoding:applicationID:captureRequestIdentifier:baseFolderURL:err:;
- (id)copyBufferForTag:err:;
- (BOOL)hasBufferForType:portType:;
- (id)copyBufferForType:portType:metadata:err:;
- (id)copyBuffersForType:portType:metadataArray:err:;
- (id)copyAttributesForBufferType:portType:err:;
- (id)copyMetadataForBufferTag:err:;
- (id)copyMetadataForTag:err:;
- (BOOL)hasInferenceBuffer:portType:;
- (id)copyInferenceBufferForKey:portType:err:;
- (BOOL)hasInference:portType:;
- (id)copyInferenceForKey:customClasses:portType:err:;
- (id)copyArrayForTag:customClasses:err:;
- (id)copyDictionaryForTag:err:;
- (void)releaseIntermediates;
- (unsigned int)processingCount;
- (unsigned long long)sizeBytes;
- (unsigned int)ageSeconds;
@end
