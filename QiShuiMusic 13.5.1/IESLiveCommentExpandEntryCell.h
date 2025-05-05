@interface IESLiveCommentExpandEntryCell : UICollectionViewCell
@property (nonatomic) IESLiveAnimatedImageView imageView;
@property (nonatomic) UIView redDot;
@property (nonatomic) IESLiveCommentExpandEntryItem item;
@property (nonatomic) UIView container;
@property (nonatomic) <IESLiveCompoundSubscription> dispose;
- (void)changeImageViewWithSelected:;
- (id)redDot;
- (void)setAccessibilityByItem:;
- (void)setDispose:;
- (void)setRedDot:;
- (id)item;
- (void)setContainer:;
- (void)dealloc;
- (id)dispose;
- (id)container;
- (void)setSelected:;
- (void)updateWithItem:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setupViews;
@end
