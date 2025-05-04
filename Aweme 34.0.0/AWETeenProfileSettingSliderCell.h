@interface AWETeenProfileSettingSliderCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView roundDotView;
@property (nonatomic) AWETeenSettingItemModel itemModel;
- (id)itemModel;
- (void)setItemModel:;
- (id)roundDotView;
- (BOOL)showCustomHighlight;
- (id)initWithTitle:iconURL:placeholder:;
- (void)makeCircleICONImage;
- (void)changeTitle:iconURL:placeholder:;
- (void)hideCell:;
- (void)setRoundDotView:;
- (void)setHighlighted:animated:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (double)cellHeight;
+ (BOOL)isNewStyle;
+ (double)contentHeightOffsetWithContent:containerWitdh:;
+ (id)titleFont;
@end
