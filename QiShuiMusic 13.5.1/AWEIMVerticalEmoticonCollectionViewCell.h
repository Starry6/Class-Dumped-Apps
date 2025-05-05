@interface AWEIMVerticalEmoticonCollectionViewCell : UICollectionViewCell
@property (nonatomic) q imageScale;
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
- (void)setEmoticonImageView:;
- (void)setImageScale:;
- (long long)imageScale;
- (id)viewModel;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)cellReuseIdentifier;
@end
