@interface IESECEmptyViewTTVideo : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIButton refreshButton;
@property (nonatomic) @? refreshBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descLabel;
- (void)hideErrorView;
- (id)initWithRefreshBlock:;
- (void)setDescLabel:;
- (void)showErrorViewInContainer:;
- (void)refreshButtonTapped;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setUpViews;
- (id)refreshButton;
- (void)setRefreshButton:;
- (void)setRefreshBlock:;
- (id)refreshBlock;
+ (id)emptyViewWithRefreshBlock:;
@end
