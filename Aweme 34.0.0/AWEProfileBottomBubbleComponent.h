@interface AWEProfileBottomBubbleComponent : AWEUserDetailBaseComponent
@property (nonatomic) UIButton<AWEProfileBottomBubbleViewProtocol> bottomBubble;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishRemoveFansWithUser:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)didFinishDiggProfileWithUser:isDigged:error:;
- (void)setUpBottomView;
- (void)onDidRequestUser:error:;
- (void)updateViewWithUser:;
- (id)bottomBubble;
- (id)playerAndInteractionService;
- (void)setBottomBubble:;
- (void)onButtonTapped;
- (void)playTapAnimation;
- (id)user;
- (void)dealloc;
- (void)viewDidLoad;
- (id)containerView;
- (void).cxx_destruct;
- (id)bottomViewText;
@end
