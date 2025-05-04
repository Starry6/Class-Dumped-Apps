@interface AWETeenSearchSugTableViewCell : UITableViewCell
@property (nonatomic) UIImageView searchImage;
@property (nonatomic) UILabel sugWordLabel;
@property (nonatomic) BDImageView tagImageView;
@property (nonatomic) UIImageView complementImage;
@property (nonatomic) AWETeenSearchSugWordModel model;
@property (nonatomic) NSString sugType;
@property (nonatomic) <AWETeenSearchSugTableViewCellDelegate> delegate;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)tagImageView;
- (void)setTagImageView:;
- (void)didClickedComplementView:;
- (id)sugType;
- (id)searchImage;
- (void)setSugType:;
- (id)sugWordLabel;
- (id)complementImage;
- (void)setSugWordLabel:;
- (void)setComplementImage:;
- (void)setSearchImage:;
- (void)setModel:;
- (id)delegate;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
