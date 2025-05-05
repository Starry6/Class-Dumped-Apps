@interface FRCLivePhotoMetadataReader : NSObject
@property (nonatomic) BOOL verbose;
@property (nonatomic) Q numberOfDroppedFrames;
@property (nonatomic) Q numberOfInterpolatedFrames;
- (id)init;
- (void).cxx_destruct;
- (BOOL)verbose;
- (void)setVerbose:;
- (unsigned long long)preParseMetadata;
- (id)getStillImageTime:;
- (void)readLivePhotoMetadataFromAsset:;
- (BOOL)processLivePhotoMetadataItem:isIDR:recipeAvailable:;
- (id)createMetadataAdaptorForAsset:;
- (void)printV3Metadata:frameIndex:time:isIDR:noRecipeGap:;
- (unsigned long long)numberOfDroppedFrames;
- (unsigned long long)numberOfInterpolatedFrames;
@end
