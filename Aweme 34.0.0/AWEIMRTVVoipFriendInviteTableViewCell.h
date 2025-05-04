@interface AWEIMRTVVoipFriendInviteTableViewCell : AWEIMUserTableViewCell
@property (nonatomic) UIButton invokeButton;
@property (nonatomic) UIView onlineIndicatorView;
@property (nonatomic) <AWEIMRTVVoipFriendInviteTableViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)onlineIndicatorView;
- (void)configInviteButton:titleColor:bgColor:;
- (BOOL)__isLightStyle;
- (void)__refreshOnlineIndicatorViewWithContext:;
- (id)invokeButton;
- (BOOL)__isValidColorHexString:;
- (void)__handleInvokeButtonClick:;
- (void)setInvokeButton:;
- (id)delegate;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
@end
