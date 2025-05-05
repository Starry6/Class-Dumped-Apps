@interface IESECGoodsInternalFeedSearchBannerView : UIView
@property (nonatomic) UIView searchView;
@property (nonatomic) UIImageView searchIcon;
@property (nonatomic) UILabel topicLabel;
@property (nonatomic) UILabel searchLabel;
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) IESECFeedSearchWordModel model;
- (void)setSearchLabel:;
- (id)searchIcon;
- (void)setRightIcon:;
- (void)setSearchIcon:;
- (void)setTopicLabel:;
- (void)setupUIWithModel:;
- (id)topicLabel;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)searchLabel;
- (id)rightIcon;
- (id)searchView;
- (void)setSearchView:;
@end
