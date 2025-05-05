@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject
@property (nonatomic) @? downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) {shared_ptr<mlcore::EntityQuery>=^{EntityQuery}^{__shared_weak_count}} downloadableItemsQuery;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)downloadablePlaylistItemEntityQueryBlock;
- (void)setDownloadablePlaylistItemEntityQueryBlock:;
- (id)downloadableItemsQuery;
- (void)setDownloadableItemsQuery:;
@end
