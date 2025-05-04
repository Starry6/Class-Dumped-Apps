@interface AWEIMRipMediaMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView displayBoxView;
@property (nonatomic) UIImageView displayMarkView;
- (id)menuTargetView;
- (id)displayBoxView;
- (id)displayMarkView;
- (id)p_calculateBoxSizeWithSelfMessage;
- (void)p_trackRipCellShow;
- (void)trackRipCellShowIfNeeded;
- (void)setDisplayBoxView:;
- (void)setDisplayMarkView:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)contentSizeWithMesasge:;
+ (id)p_calculateBoxSizeWithRipMediaMessage:;
+ (id)identifier;
@end
