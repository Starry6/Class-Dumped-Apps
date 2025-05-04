@interface AWEPadPolymericChannelFilterItemView : UICollectionViewCell
@property (nonatomic) UILabel itemLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSelected:;
- (void)setupView;
- (id)itemLabel;
- (void)setItemLabel:;
+ (id)itemViewWithTitle:selected:;
@end
