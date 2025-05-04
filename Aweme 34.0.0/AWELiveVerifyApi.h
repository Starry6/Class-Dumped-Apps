@interface AWELiveVerifyApi : NSObject
@property (nonatomic) HTSLiveApi clientApi;
- (void)multiIDAuth:;
- (void)verifyForMultiID:;
- (void)requestZMAuthParams:withCompletion:;
- (id)clientApi;
- (void)queryZMAuthResultWithToken:source:completion:;
- (void)requestZMAuthParamsWithCompletion:;
- (void)queryZMAuthResultWithToken:completion:;
- (void)queryZYAuthResultWithToken:sourceDictionary:completion:;
- (void)queryZYAuthResultWithSourceDictionary:completion:;
- (void)certificationQueryWithParams:completion:;
- (void)setClientApi:;
- (id)init;
- (void).cxx_destruct;
@end
