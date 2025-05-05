@interface AWEIMRichCoverCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (nonatomic) <AWEIMBaseCollectionViewEventProtocol> delegate;
- (void)asyncLoadCover;
- (void)configWithViewModel:;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (void)setViewModel:;
- (void)setImageView:;
- (void)layoutImageView;
+ (id)cellReuseIdentifier;
@end
