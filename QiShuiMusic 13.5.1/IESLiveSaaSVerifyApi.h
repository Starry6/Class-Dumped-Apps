@interface IESLiveSaaSVerifyApi : NSObject
@property (nonatomic) HTSLiveApi clientApi;
- (id)clientApi;
- (void)multiIDAuth:;
- (void)queryZMAuthResultWithToken:completion:;
- (void)queryZMAuthResultWithToken:source:completion:;
- (void)queryZYAuthResultWithSourceDictionary:completion:;
- (void)queryZYAuthResultWithToken:sourceDictionary:completion:;
- (void)setClientApi:;
- (void)verifyForMultiID:;
- (id)init;
- (void).cxx_destruct;
@end
