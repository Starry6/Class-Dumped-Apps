@interface IESIMSaaSRipMediaMessageTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) UIView displayBoxView;
@property (nonatomic) UIImageView displayMarkView;
- (id)displayMarkView;
- (id)displayBoxView;
- (id)menuTargetView;
- (id)p_calculateBoxSizeWithSelfMessage;
- (void)p_trackRipCellShow;
- (void)setDisplayBoxView:;
- (void)setDisplayMarkView:;
- (void)trackRipCellShowIfNeeded;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
+ (id)contentSizeWithMesasge:;
+ (id)p_calculateBoxSizeWithRipMediaMessage:;
+ (double)p_getContentPandding;
+ (id)identifier;
@end
