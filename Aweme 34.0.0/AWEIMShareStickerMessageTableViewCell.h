@interface AWEIMShareStickerMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) AWEButton shootSameButton;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (id)shootSameButton;
- (void)setShootSameButton:;
- (void)coverTapped:;
- (void)configShootSameButtonIfNeedWithMessage:;
- (void)shootSameButtonTapped;
- (void)p_trackItemClickWithMessage:place:;
- (void)checkUserSendPhotoPrivilegeWithCompletion:;
- (void)postViewTapped:;
- (void)p_trackShareStickerCellShow;
- (void)trackShareStickerCellShowIfNeeded;
- (id)gradientView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)setGradientView:;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
