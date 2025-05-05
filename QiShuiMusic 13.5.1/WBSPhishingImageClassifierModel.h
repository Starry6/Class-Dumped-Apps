@interface WBSPhishingImageClassifierModel : NSObject
- (void).cxx_destruct;
- (BOOL)classifyImage:enumerationBlock:error:;
- (void)configureSnapshotConfiguration:webViewBounds:;
- (id)initWithURL:cropAndScaleOption:imageInputSize:error:;
- (void)_loadModelIfNecessary;
- (id)_createClassifierRequestHandlerWithImage:;
- (id)_createClassifierRequest;
+ (void)configureSnapshotConfiguration:cropAndScaleOption:webViewBounds:modelInputSize:;
@end
