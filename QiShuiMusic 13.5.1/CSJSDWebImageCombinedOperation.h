@interface CSJSDWebImageCombinedOperation : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) <CSJSDWebImageOperation> loaderOperation;
@property (nonatomic) <CSJSDWebImageOperation> cacheOperation;
@property (nonatomic) CSJSDWebImageManager manager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loaderOperation;
- (id)cacheOperation;
- (void)setCacheOperation:;
- (void)setLoaderOperation:;
- (void)setCancelled:;
- (void)cancel;
- (BOOL)isCancelled;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
@end
