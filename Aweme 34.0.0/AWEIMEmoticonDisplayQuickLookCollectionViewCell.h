@interface AWEIMEmoticonDisplayQuickLookCollectionViewCell : UICollectionViewCell
@property (nonatomic) <AWEIMSimilarEmojiDisplayQuickLookViewModelProtocol> viewModel;
@property (nonatomic) AWEIMSimilarEmojiDisplayView displayView;
@property (nonatomic) <AWEIMBaseCollectionViewCellEventProtocol> cellEventDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisplayView:;
- (id)displayView;
- (id)renderModel:context:forIndexPath:inCollectionView:;
- (void)setupCustomAutoLayout;
- (id)cellEventDelegate;
- (void)setCellEventDelegate:;
- (void)prepareForReuse;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupView;
@end
