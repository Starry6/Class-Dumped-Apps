@interface IESLiveInteractionOptionListCell : UICollectionViewCell
@property (nonatomic) UILabel desc;
@property (nonatomic) UIImageView selectionIndicator;
@property (nonatomic) IESLiveInteractionOptionItem bindedItem;
@property (nonatomic) IESLiveInteractionOptionListBubbleViewModel viewModel;
@property (nonatomic) @? didTap;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
- (id)bindedItem;
- (id)disposable;
- (id)selectionIndicator;
- (void)setBindedItem:;
- (void)setDidTap:;
- (void)setDisposable:;
- (void)setSelectionIndicator:;
- (void)dealloc;
- (id)viewModel;
- (id)desc;
- (void)setDesc:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)didTap;
- (void)handleTap;
+ (id)reuseIdentifier;
@end
