@interface AWELiveXPlayGameAPI : NSObject
- (id)xtokenRequestHost;
- (id)openAPIBaseURL;
- (void)requestXTokensInfoWithXPlayId:completion:;
- (void)requestOpenApiTokenWithAppId:roomId:needRtcInfo:isRevertLive:completion:;
@end
