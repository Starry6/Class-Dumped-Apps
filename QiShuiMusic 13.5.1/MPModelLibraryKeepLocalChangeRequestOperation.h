@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation
@property (nonatomic) @? responseHandler;
@property (nonatomic) MPModelLibraryKeepLocalChangeRequest request;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)_handlePersistentID:modelClass:keepLocal:keepLocalConstraints:mediaLibrary:;
- (void)_handleKeepLocalUpdateStatus:forLibraryIdentifier:mediaType:completedWithError:;
@end
