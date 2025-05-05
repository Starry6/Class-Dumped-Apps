@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation
@property (nonatomic) MPModelLibrarySearchRequest request;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)init;
- (void)cancel;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id).cxx_construct;
@end
