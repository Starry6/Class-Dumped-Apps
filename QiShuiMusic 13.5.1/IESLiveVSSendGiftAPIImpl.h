@interface IESLiveVSSendGiftAPIImpl : HTSLiveApi
@property (nonatomic) <IESLiveCertifyCenter> certifyCenter;
- (id)certifyCenter;
- (id)pb_errorFromSpecialResponse:sendRequest:error:;
- (void)sendGiftWithParams:completion:;
- (void)setCertifyCenter:;
- (void).cxx_destruct;
@end
