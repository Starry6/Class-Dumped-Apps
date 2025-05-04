@interface AWEECOMIMEmoticonPackageItem : UICollectionViewCell
@property (nonatomic) UIImageView emoticonView;
- (id)emoticonView;
- (void)setEmoticonView:;
- (void)reloadItemWithURL:displayName:showBkgColor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
+ (id)cellSize;
@end
