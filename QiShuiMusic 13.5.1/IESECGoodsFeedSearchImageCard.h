@interface IESECGoodsFeedSearchImageCard : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESECFeedResourceCardSearchItemModel model;
@property (nonatomic) <IESECGoodsFeedSearchCardDelegate> delegate;
- (void)clickSearchImageCard:;
- (void)updateSearchCardWithItems:;
- (id)model;
- (void)setModel:;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (void)setupSubviews;
@end
