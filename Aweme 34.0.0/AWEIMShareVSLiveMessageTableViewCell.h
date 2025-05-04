@interface AWEIMShareVSLiveMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMShareVSLiveCardView bubbleView;
- (void)p_addGesture;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)liveCoverTapped:;
- (void)cardAvatarTapped:;
- (void)p_updateBubbleView;
- (BOOL)p_isFansGroup;
- (void)tapLiveCardAction;
- (void)transferToLive;
- (void)p_liveShowTracker;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)willDisplayCell;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)contentSizeWithMesasge:;
+ (id)p_defaultPostImageForMe;
+ (id)p_defaultPostImageForOther;
+ (id)identifier;
@end
