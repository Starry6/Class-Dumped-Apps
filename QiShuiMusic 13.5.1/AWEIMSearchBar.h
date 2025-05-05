@interface AWEIMSearchBar : UIView
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) UITextField textField;
@property (nonatomic) UIButton clearBtn;
- (id)clearBtn;
- (void)clearButtonClicked:;
- (void)setClearBtn:;
- (void)setupViewFrame;
- (void)layoutSubviews;
- (id)textField;
- (void)setTextField:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
@end
