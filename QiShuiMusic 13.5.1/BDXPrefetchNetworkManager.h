@interface BDXPrefetchNetworkManager : NSObject
@property (nonatomic) NSMutableDictionary pendingRequestModel;
- (void)__handleRequestCallbackWithRequestModel:object:response:error:completion:requestBeginDate:;
- (id)pendingRequestModel;
- (BOOL)pendingRequestWithModel:;
- (BOOL)requestWithModel:schema:completion:networkService:;
- (void)setPendingRequestModel:;
- (id)init;
- (void).cxx_destruct;
@end
