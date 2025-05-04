@interface AWEFeedHomepageLongPressEditTableViewCell : UITableViewCell
@property (nonatomic) BOOL isChoosed;
@property (nonatomic) UIImageView leftIcon;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) UIImageView choosedIcon;
@property (nonatomic) AWEFeedHomepageLongPressPanelItem item;
- (void)setLeftIcon:;
- (void)updateChoosed:;
- (void)setIsChoosed:;
- (id)choosedImage;
- (id)choosedIcon;
- (id)notChoosedImage;
- (BOOL)isChoosed;
- (void)configCellWithItem:isChoosed:;
- (void)updateWithItemChanged:;
- (void)setChoosedIcon:;
- (void)prepareForReuse;
- (void)setItem:;
- (id)item;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)leftIcon;
@end
