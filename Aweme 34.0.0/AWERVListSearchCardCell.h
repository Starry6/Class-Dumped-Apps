@interface AWERVListSearchCardCell : UICollectionViewCell
@property (nonatomic) UIImageView searchIcon;
@property (nonatomic) UILabel searchLabel;
@property (nonatomic) NSArray searchButtonList;
@property (nonatomic) AWEAwemeModel currentPlayModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWERVListSearchModel searchModel;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)currentPlayModel;
- (id)searchIcon;
- (void)setSearchIcon:;
- (void)setSearchLabel:;
- (void)setCurrentPlayModel:;
- (void)updateWithSearchModel:;
- (void)trackShowSearchCard;
- (id)searchButtonList;
- (id)searchButtonWithQuery:index:;
- (void)setSearchButtonList:;
- (id)trackParamsWithQuery:index:;
- (void)trackClickSearchWordWithQuery:index:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)searchLabel;
- (void)setupUI;
- (void)setSearchModel:;
- (id)searchModel;
+ (double)cellHightWithSearchModel:;
@end
