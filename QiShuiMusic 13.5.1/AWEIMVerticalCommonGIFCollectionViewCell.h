@interface AWEIMVerticalCommonGIFCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) <AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (nonatomic) <AWEIMBaseCollectionViewEventProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)emoticonImageView;
- (void)p_setupUI;
- (void)setEmoticonImageView:;
- (id)viewModel;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)cellReuseIdentifier;
@end
