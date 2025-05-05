@interface BWMultiFilterThumbnailNode : BWNode
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)initWithFilters:thumbnailSize:maxLossyCompressionLevel:;
- (id)nodeSubType;
@end
