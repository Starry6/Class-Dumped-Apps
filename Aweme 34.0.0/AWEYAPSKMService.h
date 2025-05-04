@interface AWEYAPSKMService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferRouteUrlWithCodeUrl:extraParams:completion:;
- (void)registerVoiceBroadcastNotification;
- (void)saveScanInfo:;
- (BOOL)isSupportSKM;
- (BOOL)isSchemeMatchedSKM:;
- (void)transferRouteUrlWithCodeUrl:completion:;
@end
