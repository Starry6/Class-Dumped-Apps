@interface AWECardCouponCollectionFooterView : UICollectionReusableView
@property (nonatomic) UIImageView foldTagView;
@property (nonatomic) UIButton foldButton;
@property (nonatomic) UILabel foldDescLabel;
@property (nonatomic) <AWECardCouponCollectionFooterViewDelegate> delegate;
- (id)foldButton;
- (void)setFoldButton:;
- (id)foldTagView;
- (id)foldDescLabel;
- (void)clickFold:;
- (void)refreshWithFoldType:andFoldCount:;
- (void)setFoldTagView:;
- (void)setFoldDescLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupViews;
+ (id)identifier;
@end
