@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation
@property (nonatomic) MPModelLibraryAddToPlaylistChangeRequest request;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (BOOL)_isCloudLibraryEnabled;
- (void)_updateCloudLibraryForPlaylist:;
@end
