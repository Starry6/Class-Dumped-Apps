@interface AWELiveVisibleScopeSearchBar : UIView
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) UITextField textField;
@property (nonatomic) UIButton clearBtn;
@property (nonatomic) @? clearSearchViewBlock;
- (void)clearButtonClicked:;
- (void)setupViewFrame;
- (id)clearBtn;
- (void)clearSearchView;
- (void)setClearBtn:;
- (id)clearSearchViewBlock;
- (void)setClearSearchViewBlock:;
- (id)textField;
- (id)initWithFrame:;
- (void)setTextField:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
@end
