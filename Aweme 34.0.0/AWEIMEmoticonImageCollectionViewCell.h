@interface AWEIMEmoticonImageCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMCacheableImageView emoticonImageView;
@property (nonatomic) AWEIMEmoticonCellViewModel emoticonCellViewModel;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderWithViewModel:;
- (void)createComponent;
- (id)emoticonImageView;
- (void)setEmoticonImageView:;
- (void)layoutComponent;
- (id)emoticonCellViewModel;
- (void)renderUIWithViewModel:;
- (void)setEmoticonCellViewModel:;
- (id)indexPath;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setIndexPath:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
@end
