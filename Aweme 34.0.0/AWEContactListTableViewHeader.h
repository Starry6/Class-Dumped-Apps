@interface AWEContactListTableViewHeader : UIView
@property (nonatomic) UIView separator;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) double suggestedHeight;
@property (nonatomic) AWECommonSearchBar searchBar;
@property (nonatomic) BOOL showAllFollower;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL useNewUIStyle;
- (BOOL)useNewStyle;
- (void)setUseNewStyle:;
- (void)configSearchBar:;
- (BOOL)showAllFollower;
- (void)setShowAllFollower:;
- (void)setUseNewUIStyle:;
- (BOOL)useNewUIStyle;
- (void)setSuggestedHeight:;
- (id)searchBar;
- (void)setSeparator:;
- (id)separator;
- (void)setSearchBar:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (double)suggestedHeight;
@end
