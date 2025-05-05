@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation
@property (nonatomic) MPStoreLibraryPersonalizationRequest request;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (void)cancel;
- (id)responseHandler;
- (void)setResponseHandler:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
+ (id)personalizedResponseForContentDescriptor:requestedProperties:;
@end
