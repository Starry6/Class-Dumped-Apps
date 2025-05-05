@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation
@property (nonatomic) MPModelLibraryDeleteEntityChangeRequest request;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)_handlePersistentID:modelClass:mediaLibrary:;
- (void)_deleteItems:withLibrary:;
- (BOOL)_isCloudLibraryEnabled;
@end
