@interface IESLiveSaaSPuzzleWebImage : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageFromCacheWithKey:needDisk:;
- (id)imageCachePathForKey:;
- (id)imageWithData:preloadAllFrame:;
- (void)loadImageWithURL:complete:;
- (void)loadImageWithURL:targetSize:complete:;
- (id)puzzleImageNamed:;
- (void)storeImage:forKey:toDisk:;
- (id)imageDataForKey:;
@end
