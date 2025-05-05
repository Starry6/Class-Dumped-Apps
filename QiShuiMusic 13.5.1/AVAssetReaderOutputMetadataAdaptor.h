@interface AVAssetReaderOutputMetadataAdaptor : NSObject
@property (nonatomic) AVAssetReaderTrackOutput assetReaderTrackOutput;
- (id)init;
- (void)dealloc;
- (int)addExtractionForOutput:figAssetReader:options:withOutputExtactionID:;
- (id)initWithAssetReaderTrackOutput:;
- (id)assetReaderTrackOutput;
- (id)nextTimedMetadataGroup;
+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:;
@end
