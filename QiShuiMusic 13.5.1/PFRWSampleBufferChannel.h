@interface PFRWSampleBufferChannel : NSObject
@property (nonatomic) BOOL useAdaptor;
@property (nonatomic) BOOL finished;
@property (nonatomic) AVAssetWriterInput assetWriterInput;
@property (nonatomic) AVAssetReaderOutput assetReaderOutput;
@property (nonatomic) AVAssetWriterInputPixelBufferAdaptor adaptor;
- (void)setFinished:;
- (id)init;
- (void)cancel;
- (BOOL)finished;
- (void).cxx_destruct;
- (id)assetWriterInput;
- (id)initWithAssetReaderOutput:assetWriterInput:useAdaptor:;
- (void)callCompletionHandlerIfNecessary;
- (void)startWithDelegate:completionHandler:;
- (BOOL)useAdaptor;
- (void)setUseAdaptor:;
- (void)setAssetWriterInput:;
- (id)assetReaderOutput;
- (void)setAssetReaderOutput:;
- (id)adaptor;
- (void)setAdaptor:;
@end
