@interface AWENaviStickerDownloadManager : NSObject
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) NSMutableDictionary stickerDownloadProgressDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)compactObservers;
- (id)stickerDownloadProgressDict;
- (void)p_downloadSticker:;
- (void)downloadStickerIfNeed:;
- (id)stickerDownloadProgress:;
- (void)setStickerDownloadProgressDict:;
- (id)init;
- (void)removeObserver:;
- (id)observers;
- (void)addObserver:;
- (void).cxx_destruct;
- (void)setObservers:;
+ (id)manager;
@end
