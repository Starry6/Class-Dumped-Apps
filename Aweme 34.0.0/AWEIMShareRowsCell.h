@interface AWEIMShareRowsCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)cofigWithCellType:;
- (id)iconView;
- (void)setIconView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)conversation;
- (void)setNameLabel:;
- (void)setConversation:;
+ (id)identifier;
@end
