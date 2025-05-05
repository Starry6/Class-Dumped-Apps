@interface AWEIMVideoCardMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bubbleViewDidTapped;
- (void)cardFollowBtnClicked:;
- (void)configWithMessage:;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (id)menuTargetView;
- (BOOL)menuViewRectContainsPoint:;
- (void)p_cardAvatarTapped:;
- (void)p_postViewTapped:;
- (void)p_refreshCardFollowBtnUI;
- (void)p_updateBubbleView;
- (void)updateLoadingAnimation:;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)menuItems;
+ (id)contentSizeWithMesasge:;
+ (id)p_defaultPostImageForMe;
+ (id)p_defaultPostImageForOther;
+ (id)identifier;
@end
