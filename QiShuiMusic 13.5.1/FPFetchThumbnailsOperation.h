@interface FPFetchThumbnailsOperation : FPOperation
@property (nonatomic) @? perThumbnailCompletionBlock;
@property (nonatomic) @? thumbnailsFetchCompletionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (void)operation:didReceiveProgressInfo:error:;
- (id)initWithItems:desiredSize:screenScale:itemManager:;
- (void)_perItemCompletionBlockFor:thumbnail:contentType:error:;
- (id)perThumbnailCompletionBlock;
- (void)setPerThumbnailCompletionBlock:;
- (id)thumbnailsFetchCompletionBlock;
- (void)setThumbnailsFetchCompletionBlock:;
@end
