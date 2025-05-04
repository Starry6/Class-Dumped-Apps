@interface AWELiveExpoundCardBizAttributeCell : UITableViewCell
@property (nonatomic) AWELiveExpoundCardBizAttributeCellViewModel viewModel;
@property (nonatomic) UILabel keyLabel;
@property (nonatomic) UIImageView contentIcon;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)contentIcon;
- (void)setContentIcon:;
- (void)prepareForReuse;
- (id)viewModel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)keyLabel;
- (void)setKeyLabel:;
@end
