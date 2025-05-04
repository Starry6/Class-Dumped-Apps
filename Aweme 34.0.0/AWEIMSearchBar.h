@interface AWEIMSearchBar : UIView
@property (nonatomic) UITextField textField;
@property (nonatomic) UIButton clearBtn;
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) <AWEIMSearchBarDelegate> delegate;
- (void)clearButtonClicked:;
- (void)setupViewFrame;
- (id)clearBtn;
- (void)setClearBtn:;
- (id)delegate;
- (id)textField;
- (id)initWithFrame:;
- (void)setTextField:;
- (void)cancelSearch;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
@end
