@interface AWEIMGroupOwnerMessagesListImageCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell
@property (nonatomic) UIImageView contentImageView;
@property (nonatomic) UIImageView decorationIconView;
@property (nonatomic) UILabel contentLabel;
- (void)renderCustomizeContentWithVM:;
- (void)__setupUnavailableUI;
- (void)__setupAvailableUI;
- (void)__setupImageWithViewModel:;
- (void)__observeViewModelImage;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)contentImageView;
- (id)decorationIconView;
- (void)setContentImageView:;
- (void)setDecorationIconView:;
+ (id)identifier;
@end
