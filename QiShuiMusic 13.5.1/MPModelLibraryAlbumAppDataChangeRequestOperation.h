@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation
@property (nonatomic) @? responseHandler;
@property (nonatomic) MPModelLibraryAlbumAppDataChangeRequest request;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
@end
