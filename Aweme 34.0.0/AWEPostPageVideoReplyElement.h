@interface AWEPostPageVideoReplyElement : AWEPostPageCellElement
@property (nonatomic) AWENewPublishTableCell videoReplyCell;
@property (nonatomic) BOOL isShowingVideoReplyPopupViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showBubble;
- (id)bubbleIdentifier;
- (BOOL)bubbleShouldShow;
- (id)requiresFailureBubbleIdentifiers;
- (BOOL)p_shouldShowVideoReplyCell;
- (id)videoReplyCell;
- (BOOL)isShowingVideoReplyPopupViewController;
- (void)setIsShowingVideoReplyPopupViewController:;
- (void)switchStateDidchange:;
- (void)publishVideoReplyPopupViewControllerWillDealloc;
- (void)setVideoReplyCell:;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (BOOL)isReply;
- (id)bubble;
- (id)cell;
- (void)didSelect;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;
@end
