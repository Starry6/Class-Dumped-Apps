@interface IESLiveLinkmicDefaultLocalLayout : NSObject
@property (nonatomic) IESLiveInteractSession hostSession;
@property (nonatomic) UIView sessionViewContainer;
@property (nonatomic) UIView optionViewContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHostSession:;
- (id)hostSession;
- (void)layoutHostSession:;
- (void)onNewSessionCreated:local:;
- (id)optionViewContainer;
- (id)sessionViewContainer;
- (void)setOptionViewContainer:;
- (void)setSessionViewContainer:;
- (void)updateLayoutOfSessionViews:withUserService:;
- (void).cxx_destruct;
@end
