@interface AWEFansPushReverseUrgeRewardView : UIView
@property (nonatomic) <AWEFansPushReverseUrgeRewardViewDelegate> delegate;
@property (nonatomic) BOOL shouldShowBubble;
@property (nonatomic) BOOL hideUrgeInfo;
@property (nonatomic) BOOL enableUrgeLiveSwitch;
@property (nonatomic) BOOL isLightMode;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel urgeCountLabel;
@property (nonatomic) UILabel giftCountLabel;
@property (nonatomic) UIView dividingLine;
@property (nonatomic) UIImageView coinIcon;
@property (nonatomic) UILabel amountLabel;
@property (nonatomic) UILabel introduceLabel;
@property (nonatomic) UIImageView introduceIcon;
@property (nonatomic) NSMutableArray giftDescriptionArea;
@property (nonatomic) UIView indicatorView;
- (BOOL)isLightMode;
- (void)setIsLightMode:;
- (id)dividingLine;
- (void)setDividingLine:;
- (BOOL)shouldShowBubble;
- (void)setShouldShowBubble:;
- (void)setHideUrgeInfo:;
- (void)p_setupUIWithConfig:;
- (id)p_countToString:needX:;
- (id)giftDescriptionArea;
- (id)generateGiftDescriptonViewWithConfig:;
- (BOOL)enableUrgeLiveSwitch;
- (BOOL)hideUrgeInfo;
- (void)p_setupViewsWithConfig:;
- (void)p_setupConstraintsWithConfig:;
- (void)setUrgeCountLabel:;
- (void)setGiftCountLabel:;
- (void)setCoinIcon:;
- (void)p_didTapIntroduceArea;
- (void)setIntroduceLabel:;
- (void)setIntroduceIcon:;
- (void)p_setupUrgeOnlyConstraintsWithConfig:;
- (void)p_setupGiftConstraintsWithConfig:urgeNeedShow:;
- (void)p_setupUrgeAndGiftConstraintsWithConfig:;
- (id)urgeCountLabel;
- (id)giftCountLabel;
- (id)urgeContentWithText:urgeCount:;
- (id)coinIcon;
- (id)introduceLabel;
- (id)introduceIcon;
- (void)p_setupGiftDescriptionAreaWithConfig:;
- (void)setEnableUrgeLiveSwitch:;
- (void)setGiftDescriptionArea:;
- (id)delegate;
- (id)initWithDelegate:;
- (void)updateWithConfig:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setAmountLabel:;
- (id)amountLabel;
@end
