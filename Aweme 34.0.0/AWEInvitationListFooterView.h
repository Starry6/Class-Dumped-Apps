@interface AWEInvitationListFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView lineView;
@property (nonatomic) BOOL lineViewHidden;
- (void)setLineViewHidden:;
- (BOOL)lineViewHidden;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)lineView;
- (void)setLineView:;
- (void)_setupUI;
+ (double)cellFooterHeight;
+ (double)lineMarginHeight;
+ (id)identifier;
@end
