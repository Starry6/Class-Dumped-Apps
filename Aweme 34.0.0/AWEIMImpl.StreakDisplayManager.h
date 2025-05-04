@interface AWEIMImpl.StreakDisplayManager : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) UIView<IESIMStreakFlameViewProtocol> streakFlameView;
@property (nonatomic) AWEIMCodeGenStreakInfoModel currentStreakFlameInfo;
@property (nonatomic) <IESIMConversationProtocol> conversation;
@property (nonatomic) <AWEIMStreakDisplayManagerDelegate> delegate;
- (void)imStreakDataDidUpdateWithConversation:;
- (id)streakFlameView;
- (void)setStreakFlameView:;
- (id)currentStreakFlameInfo;
- (void)setCurrentStreakFlameInfo:;
- (id)initWithFromScene:attributes:streakIconHeight:isWithoutView:;
- (void)updateUIRenderConfigWithStreakIconHeight:attributes:;
- (void)setupWithConversation:;
- (void)setupWithConversation:peerUser:;
- (void)trackIMStreakShowWithExtraParams:;
- (void)getStreakYYAttributedStringWithCompletion:;
- (void)getStreakAttributedStringWithCompletion:;
- (void)didClickStreakView;
- (void)setScene:;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)conversation;
- (void)setConversation:;
@end
