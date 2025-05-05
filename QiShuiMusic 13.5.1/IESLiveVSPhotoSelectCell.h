@interface IESLiveVSPhotoSelectCell : UICollectionViewCell
@property (nonatomic) UIImageView photoImageView;
@property (nonatomic) NSInteger requestID;
@property (nonatomic) NSIndexPath index;
@property (nonatomic) PHAsset asset;
- (double)selfwidth;
- (void)updateWithPHAsset:;
- (void)layoutSubviews;
- (id)asset;
- (void)prepareForReuse;
- (id)index;
- (id)initWithFrame:;
- (int)requestID;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setRequestID:;
- (id)cellSize;
- (id)photoImageView;
- (void)setPhotoImageView:;
+ (id)identifier;
@end
