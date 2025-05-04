@interface AWEIMOnlineContactAvatarCollectionViewCell : AWEIMSkylightAvatarCollectionViewCell
@property (nonatomic) AWEIMSkylightAvatarPendant pendant;
@property (nonatomic) AWEIMSkylightDotView commonDotView;
@property (nonatomic) AWEIMActiveUserIndicativeView onlineDotView;
- (id)onlineDotView;
- (id)pendant;
- (void)setPendant:;
- (void)renderWithModel:;
- (void)updateOnlineStatus;
- (void)updateWithPendantState:;
- (id)commonDotView;
- (void)createComponents;
- (void)setCommonDotView:;
- (void)momentColorRingDidChange;
- (void)updateUserInfo;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutComponents;
@end
