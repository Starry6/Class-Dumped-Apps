@interface AWEIMShareH5GoodsMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) AWEIMGeneralDisableCardView disableCardView;
@property (nonatomic) UITapGestureRecognizer tapGes;
- (id)tapGes;
- (void)setTapGes:;
- (void)configWithMessage:;
- (void)p_initSubviews;
- (BOOL)isOpenedTimor;
- (BOOL)unSupportMessageForDLite:;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:;
- (void)trackH5ShareEventForName:;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:;
- (void)trackH5ShareFromFeedAnchorShowIfNeeded;
- (void)setDisableCardView:;
- (id)disableCardView;
- (void)coverTapped:;
- (void)p_changeCardStyleWithIsDisable:;
- (void)trackShareGoodsClick;
- (BOOL)isOpenedActiveRouterOrSafeWebLink;
- (id)p_getTargetView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)cardView;
- (void)setCardView:;
- (void)willDisplayCell;
+ (id)contentSizeWithMesasge:;
+ (id)p_getSubtitleWithMessage:;
+ (id)identifier;
@end
