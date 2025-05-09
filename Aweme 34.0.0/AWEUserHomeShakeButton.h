@interface AWEUserHomeShakeButton : UIButton
@property (nonatomic) BOOL reminded;
@property (nonatomic) BOOL canBeUrged;
@property (nonatomic) BOOL enableOnlyShake;
@property (nonatomic) UIView iconBackGroundView;
@property (nonatomic) MASConstraint completeImageViewRightConstraint;
@property (nonatomic) MASConstraint detailLableRightConstraint;
@property (nonatomic) Q shakeButtonType;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView completeImageView;
@property (nonatomic) UIImageView iconImageView;
- (id)_countToString:;
- (id)completeImageView;
- (void)changeToRead;
- (void)updateUrgeAnchorIconImageWithImageURL:;
- (void)changeToUrgeAnchor:buttonText:imageURL:canBeUrged:;
- (void)changeToReminded:;
- (void)changeToWaitingForUrge:;
- (void)updateUnreadStyle:;
- (void)changeToUnreadWithText:animated:;
- (BOOL)canBeUrged;
- (void)updateButtonType:;
- (id)iconBackGroundView;
- (void)_commontInitWithType:;
- (void)layoutReminderDefault;
- (void)layoutCreatorDefault;
- (void)layoutSplitScreenDefault;
- (unsigned long long)shakeButtonType;
- (void)clearReminderDefaultLayout;
- (void)clearCreatorDefaultLayout;
- (void)clearSplitScreenDefaultLayout;
- (void)setShakeButtonType:;
- (id)completeImageViewRightConstraint;
- (void)setCompleteImageViewRightConstraint:;
- (id)detailLableRightConstraint;
- (void)setDetailLableRightConstraint:;
- (void)setEnableOnlyShake:;
- (BOOL)enableOnlyShake;
- (void)setReminded:;
- (void)setCanBeUrged:;
- (BOOL)reminded;
- (void)setCompleteImageView:;
- (void)setIconBackGroundView:;
- (id)accessibilityLabel;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)initWithType:;
- (void)setIconImageView:;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
