@interface CPBitmapStore : NSObject
@property (nonatomic) NSInteger version;
@property (nonatomic) BOOL lockOnRead;
@property (nonatomic) Q cacheItemLimit;
- (void)commitTransaction;
- (id)imagePath;
- (void)purge;
- (void)dealloc;
- (int)setVersion:;
- (int)version;
- (void)setCacheItemLimit:;
- (void)setLockOnRead:;
- (unsigned long long)imageCount;
- (id)openAndMmap:withInfo:;
- (id)copyImageForKey:inGroup:;
- (BOOL)lockOnRead;
- (id)_versionPath;
- (void)removeImagesInGroups:completion:;
- (id)allGroups;
- (unsigned long long)cacheItemLimit;
- (void)storeImageForKey:inGroup:opaque:image:;
- (id)initWithPath:version:;
- (id)imageNameForKey:inGroup:;
- (id)cacheNumberForKey:;
- (BOOL)findImageWithKey:inGroup:andInfo:;
- (BOOL)saveImageWithKey:inGroup:andInfo:;
- (unsigned int)memContentOffset;
- (id)copyImageForKey:;
- (void)commitTxn;
- (id)_copyAndStoreImageForKey:inGroup:withSize:format:scale:fillMem:alternateCompletion:;
- (id)copyAndStoreImageForKey:inGroup:withSize:opaque:scale:draw:;
- (void)storeImageDataForKey:inGroup:withSize:opaque:scale:data:;
- (void)storeGrayscaleImageDataForKey:inGroup:withSize:opaque:scale:data:;
- (void)storeImageDataForKey:inGroup:withSize:format:scale:data:;
- (void)storeImageDataForKey:inGroup:withSize:format:formatColor:scale:data:;
- (void)removeImagesInGroups:;
@end
