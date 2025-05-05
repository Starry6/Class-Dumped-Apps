@interface QLPreviewItemStore : NSObject
@property (nonatomic) <QLPreviewItemProvider> itemProvider;
@property (nonatomic) Q numberOfItems;
@property (nonatomic) {_NSRange=QQ} possibleRange;
@property (nonatomic) <QLPreviewItemStoreDelegate> delegate;
@property (nonatomic) BOOL isArchive;
- (unsigned long long)numberOfItems;
- (void)clearCache;
- (id)init;
- (long long)numberOfPreviewItemsInPreviewController:;
- (void)dealloc;
- (id)previewController:previewItemAtIndex:;
- (void)setDelegate:;
- (id)possibleRange;
- (id)delegate;
- (void).cxx_destruct;
- (void)clearItems;
- (id)itemProvider;
- (void)setItemProvider:;
- (id)initWithPreviewItems:;
- (BOOL)isArchive;
- (void)previewItemAtIndex:withCompletionHandler:;
- (id)initWithItemsOfDirectoryAtURL:;
- (void)reloadWithNumberOfPreviewItems:;
- (BOOL)hasLoadedItemsMatching:;
- (id)loadedItemsMatching:;
- (long long)indexOfPreviewItem:;
@end
