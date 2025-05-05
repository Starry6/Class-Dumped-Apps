@interface WBSendMessageToWeiboRequest : WBBaseRequest
@property (nonatomic) BOOL shouldShowComposerIfCannotShareInWBApp;
@property (nonatomic) WBAuthorizeRequest authRequest;
@property (nonatomic) NSString access_token;
@property (nonatomic) WBMessageObject message;
- (id)access_token;
- (BOOL)canBeReceived;
- (void)setAccess_token:;
- (void)setShouldShowComposerIfCannotShareInWBApp:;
- (BOOL)shouldShowComposerIfCannotShareInWBApp;
- (void)storeToDictionary:;
- (id)validate;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)canBeSent;
- (void)loadFromDictionary:;
- (id)authRequest;
- (void)setAuthRequest:;
+ (Class)associateResponseClass;
+ (id)requestWithMessage:;
+ (id)requestWithMessage:authInfo:access_token:;
@end
