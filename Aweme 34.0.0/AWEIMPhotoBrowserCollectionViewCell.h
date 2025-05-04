@interface AWEIMPhotoBrowserCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMPhotoBrowserZoomableView browserZoomView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMAssetBrowserCollectionViewCellDelegate> assetTapDelegate;
@property (nonatomic) AWEIMEditedAssetModel editedModel;
- (void)didTapZoomableView:;
- (id)transitionEndView;
- (void)setEditedModel:;
- (id)editedModel;
- (id)assetTapDelegate;
- (void)setAssetTapDelegate:;
- (id)browserZoomView;
- (void)setBrowserZoomView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setupViews;
+ (id)identifier;
@end
