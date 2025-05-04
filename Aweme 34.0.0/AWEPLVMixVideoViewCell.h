@interface AWEPLVMixVideoViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEGradientView coverTopInfoMaskView;
@property (nonatomic) AWEPadPolymericChannelCoverFavoriteTagView tagView;
@property (nonatomic) AWEPlVMultiInfoView infoView;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)duxGrid_superViewDidChangeBreakPointFrom:toBreakPoint:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)updateViewForBreakPoint:;
- (id)coverTopInfoMaskView;
- (void)setCoverTopInfoMaskView:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setupView;
- (id)infoView;
- (void)setInfoView:;
- (id)tagView;
- (void)setTagView:;
@end
