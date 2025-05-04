@interface AWESearchMentionedStoreCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel itemLabel;
@property (nonatomic) {CGSize=dd} iconViewSize;
@property (nonatomic) {CGSize=dd} itemLabelSize;
- (id)itemLabelSize;
- (void)setItemLabelSize:;
- (id)iconViewSize;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)itemLabel;
- (void)setItemLabel:;
- (void)updateWithModel:;
- (void)setIconViewSize:;
@end
