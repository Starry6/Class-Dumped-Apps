@interface AWENoticeDisturbingTipsView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) <AWENoticeDisturbingTipsViewDelegate> delegate;
- (void)__setupUIComponents;
- (void)__layoutUIComponents;
- (void)__didClickClose;
- (id)init;
- (id)delegate;
- (void)dismiss;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)bottomLine;
- (void)setBottomLine:;
+ (long long)enableDisturbingTips;
+ (long long)unreadCountLimit;
+ (double)heightForTips;
+ (void)markDisturbingTipsShow;
+ (BOOL)__canShowDisturbingTips;
+ (double)__lastTimeShowDisturbingTips;
+ (id)__cacheKey;
@end
