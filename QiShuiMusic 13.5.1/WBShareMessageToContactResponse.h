@interface WBShareMessageToContactResponse : WBBaseResponse
@property (nonatomic) WBAuthorizeResponse authResponse;
- (BOOL)canBeReceived;
- (void)setAuthResponse:;
- (void)storeToDictionary:;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:;
- (id)authResponse;
@end
