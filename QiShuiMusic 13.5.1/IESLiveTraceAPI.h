@interface IESLiveTraceAPI : HTSLiveApi
@property (nonatomic) <IESLiveHTTPClient> client;
@property (nonatomic) NSURL uploadURL;
- (void)uploadTraceEvents:completion:;
- (void)setUploadURL:;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
- (id)uploadURL;
@end
