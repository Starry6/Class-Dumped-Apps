@interface AWEIMVerticalMutiableGIFEmoticonCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel emotionLabel;
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) <AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (nonatomic) <AWEIMBaseCollectionViewEventProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)currentCellId;
- (id)emoticonImageView;
- (id)emotionLabel;
- (void)p_setupUI;
- (void)setEmoticonImageView:;
- (void)setEmotionLabel:;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)cellReuseIdentifier;
@end
