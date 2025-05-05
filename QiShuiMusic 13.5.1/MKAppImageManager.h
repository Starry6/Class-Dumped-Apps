@interface MKAppImageManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:dataTask:didReceiveData:;
- (void)URLSession:task:didCompleteWithError:;
- (void)URLSession:dataTask:didReceiveResponse:completionHandler:;
- (void).cxx_destruct;
- (id)initWithURLCache:;
- (void)clearImageCache;
- (id)cachedImageAtURL:;
- (void)loadAppImageAtURL:completionHandler:;
- (void)cancelLoadAppImageAtURL:;
- (void)_dispatchOnManThread:;
+ (id)sharedImageManager;
+ (id)sharedCollectionCoverImageManager;
@end
