@interface IESECShopStateRecommendView : UIView
@property (nonatomic) UIButton shopEntryButton;
@property (nonatomic) UILabel emptyTitleLabel;
@property (nonatomic) UILabel emptyDetailLabel;
@property (nonatomic) UIImageView emptyImageView;
- (id)shopEntryButton;
- (id)emptyTitleLabel;
- (id)emptyDetailLabel;
- (id)emptyImageView;
- (void)isShowEntry:;
- (void)setEmptyDetailLabel:;
- (void)setEmptyImageView:;
- (void)setEmptyTitleLabel:;
- (void)setShopEntryButton:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
@end
