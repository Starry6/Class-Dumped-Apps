@interface AWECommerceSwiftImpl.FeedDoubleColumnBottomCardView : UIView
@property (nonatomic) @? didTappedBlock;
@property (nonatomic) @? onTapBlock;
@property (nonatomic) UIImageView productImage;
@property (nonatomic) UILabel titleLabel;
- (void)configWithModel:;
- (id)didTappedBlock;
- (void)setDidTappedBlock:;
- (id)onTapBlock;
- (void)setOnTapBlock:;
- (id)productImage;
- (void)setProductImage:;
- (void)didTappedCardView;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)reset;
- (id)initWithCoder:;
@end
