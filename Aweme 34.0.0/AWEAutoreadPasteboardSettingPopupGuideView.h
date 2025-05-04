@interface AWEAutoreadPasteboardSettingPopupGuideView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel rightTipLabel;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:;
- (void)setNotificationOperator:;
- (id)rightTipLabel;
- (void)setRightTipLabel:;
- (id)intrinsicContentSize;
- (id)view;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)viewDidAppear;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateWithModel:;
@end
