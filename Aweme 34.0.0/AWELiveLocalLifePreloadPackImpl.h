@interface AWELiveLocalLifePreloadPackImpl : IESLiveBackendRequestBaseImpl
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:;
- (BOOL)enterFromFeedAd;
- (id)adRoomData;
- (BOOL)innerLiveAd;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;
+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;
@end
