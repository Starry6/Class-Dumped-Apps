@interface AWEECOMIMSuggestCell : UITableViewCell
@property (nonatomic) YYLabel quickReplyLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEECOMIMInputSuggestModel itemModel;
- (id)itemModel;
- (id)quickReplyLabel;
- (void)reloadWithItemModel:showBottomLine:;
- (void)setQuickReplyLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)lineView;
- (void)setLineView:;
+ (double)cellHeightWithItemModel:;
+ (id)identifier;
@end
