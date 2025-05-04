@interface AWEMusicStreamingImpl.LunaGetUpsellsRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) q scene;
@property (nonatomic) NSString freeSubscriberToken;
@property (nonatomic) BOOL firstRequest;
- (BOOL)needJsonResponse;
- (id)freeSubscriberToken;
- (void)setFreeSubscriberToken:;
- (BOOL)firstRequest;
- (void)setFirstRequest:;
- (Class)responseModelClass;
- (void)setScene:;
- (id)init;
- (long long)scene;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
