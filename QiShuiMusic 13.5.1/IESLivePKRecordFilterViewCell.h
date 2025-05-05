@interface IESLivePKRecordFilterViewCell : UICollectionViewCell
@property (nonatomic) UILabel filterTabLabel;
@property (nonatomic) BOOL isSelected;
- (id)filterTabLabel;
- (void)setFilterTabLabel:;
- (void)updateViewsWithSelected:;
- (void)setText:;
- (BOOL)isSelected;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)setupViews;
@end
