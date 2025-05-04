@interface AWEIMMediaPickerCollectionViewCell : UICollectionViewCell
@property (nonatomic) NSInteger requestID;
@property (nonatomic) PHAsset asset;
@property (nonatomic) UIImageView assetImageView;
- (void)renderWithModel:;
- (void)createComponents;
- (void)setAssetImageView:;
- (id)accessibilityDataFormatter;
- (id)accessibilityLabel;
- (int)requestID;
- (void)setRequestID:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)asset;
- (id)assetImageView;
- (void)layoutComponents;
@end
