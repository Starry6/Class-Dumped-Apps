@interface AWEPOIHeaderBaseCell : UICollectionViewCell
@property (nonatomic) Q style;
@property (nonatomic) UIImage placeholderImage;
@property (nonatomic) UIViewController vc;
- (void)didEndDisplayingCell;
- (void)updateHeight:isMaxUnfold:duration:;
- (void)updateHeight:isMaxUnfold:;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (void)updateStyle:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)updateData:completion:;
- (void)setStyle:;
- (void)willDisplayCell;
- (id)vc;
- (void)setVc:;
@end
