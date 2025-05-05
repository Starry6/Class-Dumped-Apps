@interface FigM2MController : NSObject
- (id)init;
- (int)setHistogramMode:dstRect:;
- (void)dealloc;
- (int)queryCapabilities;
- (int)transform:srcRect:dst:dstRect:rotate:flipX:flipY:sync_m2m:;
- (int)clearHistorgramMode;
- (int)transform:srcRect:dst:sync_m2m:;
- (int)copyHistogram:;
- (int)downsample:dst:sync_m2m:;
- (int)setCustomFilter:alignment:src:dst:luma_param:chroma_param:;
- (int)transform:srcRect:dst:dstRect:rotate:sync_m2m:;
- (int)setCustomFilter:alignment:sourceWidth:sourceHeight:destinationWidth:destinationHeight:luma_param:chroma_param:;
- (int)_transform:srcRect:dst:dstRect:symmetricTransform:sync_m2m:;
@end
