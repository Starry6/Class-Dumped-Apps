@interface AKBasicLoginActions : NSObject
@property (nonatomic) @? authenticateAction;
@property (nonatomic) @? ak_cancelAction;
@property (nonatomic) @? createIDAction;
@property (nonatomic) @? useIDAction;
@property (nonatomic) @? forgotIDAction;
@property (nonatomic) @? forgotPasswordAction;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)createIDAction;
- (void)setCreateIDAction:;
- (id)authenticateAction;
- (void)setAuthenticateAction:;
- (id)ak_cancelAction;
- (void)setAk_cancelAction:;
- (id)useIDAction;
- (void)setUseIDAction:;
- (id)forgotIDAction;
- (void)setForgotIDAction:;
- (id)forgotPasswordAction;
- (void)setForgotPasswordAction:;
@end
