@interface AWESearchTopicCommentInteractionComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel expandReplayLabel;
@property (nonatomic) UIView expandReplayLabelClickView;
@property (nonatomic) UILabel replyLabel;
@property (nonatomic) UIView replyLabelClickView;
@property (nonatomic) UIView dividerView;
@property (nonatomic) AWESearchCommentActionLikeView likeButton;
@property (nonatomic) UIView likeButtonClickView;
@property (nonatomic) NSLock diggLock;
@property (nonatomic) AWEGeneralSearchModel bindedModel;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
- (id)referString;
- (void)setReferString:;
- (void)commentLikeActionNotification:;
- (id)replyLabel;
- (void)setReplyLabel:;
- (void)updateWithReferString:;
- (id)expandReplayLabel;
- (void)setExpandReplayLabel:;
- (id)diggLock;
- (void)setDiggLock:;
- (void)commentTotalCountNotification:;
- (void)postLikeNotificationForComment:;
- (void)onCommentDeleteNotification:;
- (void)updateWithModel:forceUpdate:;
- (void)setBindedModel:;
- (id)bindedModel;
- (void)setModelOnly:;
- (void)setCurrentModelFromSetupModelOnly:;
- (BOOL)currentModelFromSetupModelOnly;
- (id)p_context;
- (void)p_updateWithModel:forceUpdate:;
- (void)openCommentPanel:;
- (id)likeButtonClickView;
- (id)expandReplayLabelClickView;
- (id)replyLabelClickView;
- (void)trackClickCommentButton:;
- (void)likeButtonClicked;
- (void)updateReplyLabels;
- (void)configIsSelected:diggCount:needAnimate:;
- (void)trackClickLike:;
- (void)setExpandReplayLabelClickView:;
- (void)setReplyLabelClickView:;
- (void)setLikeButtonClickView:;
- (id)init;
- (void)dealloc;
- (id)getGroupId;
- (void)_addObservers;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (void)setupUI;
- (id)likeButton;
- (void)setLikeButton:;
- (void)setDividerView:;
- (id)dividerView;
+ (id)componentSizeForModel:width:;
+ (id)p_calculateComponentSize:withModel:;
@end
