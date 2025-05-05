@interface AWEIMPhotoBrowserCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMPhotoBrowserZoomableView browserZoomView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEIMAssetBrowserCollectionViewCellDelegate> assetTapDelegate;
- (id)browserZoomView;
- (id)assetTapDelegate;
- (void)didTapZoomableView:;
- (void)setAssetTapDelegate:;
- (void)setBrowserZoomView:;
- (void)setIndexPath:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setupViews;
+ (id)identifier;
@end
