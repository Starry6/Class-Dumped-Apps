@interface STAd.BDAManager : NSObject
- (void)sendReqToWXWithUserName:path:customScene:callback:;
- (id)appScheme;
- (id)checkWebInterceptURL;
- (void)galleryWithParam:callback:webView:controller:;
- (id)getAppScheme;
- (unsigned long long)getAppTheme;
- (id)getHostUserAgent;
- (id)jsbridgeAuthConfigURL;
- (id)openOtherAppTrackTag;
- (void)openWithParam:callback:webView:controller:;
- (id)preloadV2URL;
- (void)requestForBinaryWithURL:params:method:timeout:callback:;
- (void)requireLoginCompletion:;
- (BOOL)routeOpenURL:userInfo:;
- (id)getUserInfo;
- (void)addMessageSubscriberLiveWithMessage:;
- (void)connectLiveWithRoomID:scene:params:;
- (void)disconnectWithLive:;
- (id)loadSpliceViewWithInfo:;
- (void)openLive:lynxUI:completion:;
- (void)sendMessageToFeBlock:;
- (id)init;
- (void).cxx_destruct;
@end
