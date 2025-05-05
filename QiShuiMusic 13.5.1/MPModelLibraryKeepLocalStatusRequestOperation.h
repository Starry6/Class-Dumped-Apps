@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation
@property (nonatomic) {shared_ptr<mlcore::EntityQuery>=^{EntityQuery}^{__shared_weak_count}} downloadableItemsQuery;
@property (nonatomic) @? downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) q enableState;
@property (nonatomic) MPModelObject identifyingModelObject;
@property (nonatomic) MPMediaLibraryView libraryView;
@property (nonatomic) NSNumber redownloadableItemCount;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)identifyingModelObject;
- (void)setLibraryView:;
- (void)setRedownloadableItemCount:;
- (void).cxx_destruct;
- (id)libraryView;
- (id).cxx_construct;
- (id)redownloadableItemCount;
- (long long)enableState;
- (void)setEnableState:;
- (void)setIdentifyingModelObject:;
- (id)downloadablePlaylistItemEntityQueryBlock;
- (void)setDownloadablePlaylistItemEntityQueryBlock:;
- (id)downloadableItemsQuery;
- (void)setDownloadableItemsQuery:;
@end
