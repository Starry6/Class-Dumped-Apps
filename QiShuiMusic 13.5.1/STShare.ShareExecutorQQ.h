@interface STShare.ShareExecutorQQ : NSObject
- (void)responseDidReceived:forMessage:;
- (void)onResp:;
- (void)tencentDidLogin;
- (void)isOnlineResponse:;
- (void)onReq:;
- (void)tencentDidNotLogin:;
- (void)tencentDidNotNetWork;
- (id)init;
- (void).cxx_destruct;
@end
