@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation
@property (nonatomic) NSString globalPlaylistID;
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) BOOL shouldLibraryAdd;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (id)mediaLibrary;
- (void)setResponseHandler:;
- (void)setMediaLibrary:;
- (void).cxx_destruct;
- (id)globalPlaylistID;
- (void)setGlobalPlaylistID:;
- (BOOL)shouldLibraryAdd;
- (void)setShouldLibraryAdd:;
@end
