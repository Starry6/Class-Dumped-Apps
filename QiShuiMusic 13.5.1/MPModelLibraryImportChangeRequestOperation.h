@interface MPModelLibraryImportChangeRequestOperation : MPAsyncOperation
@property (nonatomic) MPModelLibraryImportChangeRequest request;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
@end
