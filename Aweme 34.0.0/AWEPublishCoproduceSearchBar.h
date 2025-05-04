@interface AWEPublishCoproduceSearchBar : UIView
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) AWEPublishCoproduceSearchTextField textField;
@property (nonatomic) UIButton clearBtn;
- (void)clearButtonClicked:;
- (void)setupViewFrame;
- (id)clearBtn;
- (void)clearSearchView;
- (void)setClearBtn:;
- (id)textField;
- (void)setTextField:;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
@end
