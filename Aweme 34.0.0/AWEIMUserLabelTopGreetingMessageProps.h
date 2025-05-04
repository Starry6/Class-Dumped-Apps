@interface AWEIMUserLabelTopGreetingMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? avatarTapAction;
@property (nonatomic) @? profileBtnTapAction;
@property (nonatomic) NSArray avatarURLList;
@property (nonatomic) NSString nameLabelStr;
@property (nonatomic) AWEIMUser peerUser;
@property (nonatomic) BOOL hasAnyLabel;
@property (nonatomic) NSArray tagModels;
- (void)setAvatarURLList:;
- (id)peerUser;
- (void)setPeerUser:;
- (void)setAvatarTapAction:;
- (id)avatarURLList;
- (id)avatarTapAction;
- (BOOL)hasAnyLabel;
- (void)setHasAnyLabel:;
- (void)setTagModels:;
- (id)tagModels;
- (void)setProfileBtnTapAction:;
- (void)setNameLabelStr:;
- (id)profileBtnTapAction;
- (id)nameLabelStr;
- (void).cxx_destruct;
@end
