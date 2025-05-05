@interface PLFigPreheatItem : PLPreheatItem
@property (nonatomic) BOOL _hasCachedImage;
@property (nonatomic) I options;
@property (nonatomic) NSString imagePath;
- (id)imagePath;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)decodeSessionOptions;
- (void)_cancel;
- (unsigned int)options;
- (void).cxx_destruct;
- (id)initWithImagePath:format:imageType:optimalSourcePixelSize:options:;
- (void)_uncancel;
- (BOOL)_hasCachedImage;
- (void)_setHasCachedImage:;
- (id)cachedImage:;
- (id)cachedImageIfAvailable:;
- (BOOL)addImageHandler:;
- (id)initialDecodeSessionOptions;
- (void)_cacheImage;
- (void)_loadPreheatDataWithHandler:;
- (id)preheatData;
- (void)_leaveWaitGroupIfNeeded;
- (void)startPreheatRequestWithCompletionHandler:;
- (void)cancelPreheatRequestWithCompletionHandler:;
@end
