@interface AWEIMDYOfficialTableViewContentCell : UITableViewCell
@property (nonatomic) AWEIMDYOfficialTableViewContext context;
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView unreadDotView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView noticeStateImageView;
@property (nonatomic) AWEIMDYOfficialDisableStateView unsubscribeView;
@property (nonatomic) AWEIMDYOfficialDisableStateView disturbView;
@property (nonatomic) UIImageView settingView;
@property (nonatomic) UILabel settingLabel;
@property (nonatomic) UIView avatarSeparateLine;
@property (nonatomic) AWEIMDYOfficialContentCardView contentContainerView;
@property (nonatomic) AWEIMDYOfficialActionCardView actionCardView;
@property (nonatomic) UIStackView detailAreaStackView;
@property (nonatomic) UIView highlightView;
@property (nonatomic) UIButton highlightTipView;
@property (nonatomic) AWENoticeYYLabel disturbRemindLabel;
@property (nonatomic) AWEIMDYUnreadMessagesFollowingView unreadMessagesFollowingView;
@property (nonatomic) BOOL needTrackEvent;
@property (nonatomic) AWENotificationModelNew model;
@property (nonatomic) UIStackView titleAreaStackView;
@property (nonatomic) <AWEIMDYOfficialTableViewContentImageCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSettingView:;
- (id)settingView;
- (id)settingLabel;
- (void)setSettingLabel:;
- (void)setUnreadDotView:;
- (id)unreadDotView;
- (id)avatarSeparateLine;
- (void)onSettingTap;
- (void)setAvatarSeparateLine:;
- (void)onGotoDetailCustomAction:;
- (void)setUnsubscribeView:;
- (id)unsubscribeView;
- (void)onNoticeTextUnfoldClick:;
- (void)configWithModel:context:needTrackEvent:;
- (id)titleAreaStackView;
- (void)_setupTitleAreaConstraints;
- (id)noticeStateImageView;
- (id)disturbView;
- (id)actionCardView;
- (id)detailAreaStackView;
- (id)disturbRemindLabel;
- (id)unreadMessagesFollowingView;
- (id)highlightTipView;
- (void)onCellLongPress:;
- (void)setNeedTrackEvent:;
- (void)configViewHiddenState;
- (void)configCellContentWithModel:context:needTrackEvent:;
- (void)configAccessibilityInfo;
- (void)setHidden:unhiddenHeight:view:;
- (void)setGotoDetailAreaHidden:;
- (BOOL)shouldHideNoticeTip;
- (void)setNoticeTipHidden:;
- (BOOL)shouldHideNoticeStateImageView;
- (BOOL)shouldHideUnsubscribeView;
- (BOOL)shouldHideDisturbView;
- (BOOL)shouldHideUnreadMessagesFollowingView;
- (void)setUnreadMessagesFollowingViewHidden:;
- (BOOL)shouldHideUnreadDotView;
- (BOOL)shouldHideHighlightTipView;
- (void)configContentContainerView;
- (void)configAvatarView;
- (void)configDisturbRemindLabel;
- (void)configGoToDetailArea;
- (void)configHighlightTipView;
- (void)onTapMuteHint;
- (id)safeAddString:toString:;
- (BOOL)needTrackEvent;
- (void)onGotoDetailTap:;
- (unsigned long long)settingViewStyle;
- (void)setNoticeStateImageView:;
- (void)setDisturbView:;
- (void)setActionCardView:;
- (void)setDetailAreaStackView:;
- (void)setHighlightTipView:;
- (void)setDisturbRemindLabel:;
- (void)setUnreadMessagesFollowingView:;
- (void)setTitleAreaStackView:;
- (void)setModel:;
- (id)contentContainerView;
- (void)setHighlightView:;
- (id)delegate;
- (void)setAvatarView:;
- (id)highlightView;
- (void)setContentContainerView:;
- (id)avatarView;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setContext:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)bgView;
- (void)setBgView:;
- (void)setNameLabel:;
- (void)setAvatarHidden:;
- (void)_setupUI;
+ (BOOL)hasOpenHideUnreadDotViewTest;
+ (BOOL)enableNoticeCardOptimize;
+ (id)identifier;
@end
