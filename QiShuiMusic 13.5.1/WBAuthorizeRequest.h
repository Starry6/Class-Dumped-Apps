@interface WBAuthorizeRequest : WBBaseRequest
@property (nonatomic) NSString redirectURI;
@property (nonatomic) NSString scope;
@property (nonatomic) BOOL shouldShowWebViewForAuthIfCannotSSO;
- (BOOL)canBeReceived;
- (void)setShouldShowWebViewForAuthIfCannotSSO:;
- (BOOL)shouldShowWebViewForAuthIfCannotSSO;
- (void)storeToDictionary:;
- (id)validate;
- (id)init;
- (void)setScope:;
- (id)scope;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:;
- (id)redirectURI;
- (void)setRedirectURI:;
+ (Class)associateResponseClass;
@end
