@interface MPModelLibraryDownloadQueueRequest : MPModelRequest
- (id)newOperationWithResponseHandler:;
+ (BOOL)requiresNetwork;
@end
