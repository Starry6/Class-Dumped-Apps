@interface IESLiveInteractionChooseCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAvailable;
- (id)selectImageView;
- (void)setSelectImageView:;
- (void)updateItemWithTitle:selected:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setupConstraints;
- (void)setTitleLabel:;
- (BOOL)isSelected;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)setIsAvailable:;
- (id)titleLabel;
- (void)setupViews;
@end
