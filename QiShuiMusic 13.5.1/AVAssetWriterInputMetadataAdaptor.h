@interface AVAssetWriterInputMetadataAdaptor : NSObject
@property (nonatomic) AVAssetWriterInput assetWriterInput;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithAssetWriterInput:;
- (id)assetWriterInput;
- (BOOL)appendTimedMetadataGroup:;
+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:;
@end
