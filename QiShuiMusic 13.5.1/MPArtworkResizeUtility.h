@interface MPArtworkResizeUtility : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> artworkResizingAccessQueue;
@property (nonatomic) NSOperationQueue artworkResizingOperationQueue;
@property (nonatomic) NSMapTable artworkResizingOperations;
@property (nonatomic) q qualityOfService;
- (void)setQualityOfService:;
- (id)init;
- (long long)qualityOfService;
- (id)artworkResizingOperations;
- (void)setArtworkResizingAccessQueue:;
- (id)initWithQualityOfService:;
- (id)artworkResizingAccessQueue;
- (id)artworkResizingOperationQueue;
- (void)setArtworkResizingOperationQueue:;
- (id)resizeImage:scaledFittingSize:useExactFittingSizeAsDestinationSize:saveToDestinationURL:completionHandler:;
- (void)setArtworkResizingOperations:;
- (void).cxx_destruct;
- (void)cancelResizeImage:;
@end
