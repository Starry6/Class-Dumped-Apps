@interface AWEIMRTVInviteMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMRTVInviteCardView inviteCardView;
@property (nonatomic) NSMutableDictionary reusableCardViewMapper;
- (void)setRouterParams:;
- (void)chatBackgroundDidChangeNty:;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)inviteCardView;
- (id)reusableCardViewMapper;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)willDisplayCell;
+ (id)contentSizeWithMesasge:;
+ (id)contentViewOrigin;
+ (id)identifier;
@end
