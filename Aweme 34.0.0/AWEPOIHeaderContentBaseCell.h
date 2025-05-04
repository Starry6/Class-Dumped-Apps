@interface AWEPOIHeaderContentBaseCell : UICollectionViewCell
@property (nonatomic) UIImage placeholderImage;
- (void)didEndDisplayingCell;
- (void)updateData:originHeight:completion:;
- (void)updateLynxView:lynxUrl:extraParams:completion:;
- (void)updateUnfoldState:;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (void).cxx_destruct;
- (void)willDisplayCell;
@end
