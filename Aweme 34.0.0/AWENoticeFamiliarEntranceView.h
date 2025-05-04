@interface AWENoticeFamiliarEntranceView : UIView
@property (nonatomic) UIImageView iconImageView;
- (void)trackNoticeFamiliarEntranceWithActionType:;
- (void)updateNoticeEntranceShadowWithDarkTheme;
- (void)setupEntranceView;
- (void)onEntranceViewClicked:;
- (void)changeEntranceViewUnreadDotVisibility:;
- (void)trackEnterInteractionNoticeFromFamiliar;
- (id)init;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
@end
