@interface AWELiveCommercePreloadPackImpl : IESLiveBackendRequestBaseImpl
@property (nonatomic) AWEAwemeModel awemeModelToLiveRoom;
- (id)bizParams;
- (id)awemeModelToLiveRoom;
- (void)setAwemeModelToLiveRoom:;
- (id)enterLiveRoomData;
- (BOOL)enterFromSkyLight;
- (BOOL)enterFromInnerLiveStreamAd;
- (BOOL)enterFromAd;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;
+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;
@end
