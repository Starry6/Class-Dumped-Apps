@interface AWEIMGroupJoinPanelVerifyResult : NSObject
@property (nonatomic) AWEIMShareVerifyResponseModel verifyResp;
@property (nonatomic) NSError error;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)verifyResp;
- (id)initWithResp:error:statusCode:statusMsg:;
- (void)setVerifyResp:;
- (long long)statusCode;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
- (void)setStatusCode:;
@end
