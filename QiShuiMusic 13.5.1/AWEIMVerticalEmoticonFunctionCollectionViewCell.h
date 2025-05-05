@interface AWEIMVerticalEmoticonFunctionCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel searchLabel;
@property (nonatomic) UIImageView emoticonImageView;
@property (nonatomic) <AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (nonatomic) <AWEIMBaseCollectionViewEventProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchLabel:;
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
- (id)searchLabel;
+ (id)cellReuseIdentifier;
@end
