@interface IESECMallGradientBackgroundView : IESECMallBackgroundView
@property (nonatomic) UIImageView cutBgImageView;
@property (nonatomic) double curOffsetY;
- (void)updateBackgroundViewWithOffset:;
- (void)clearCutBgImageView;
- (double)curOffsetY;
- (id)currentBgImage;
- (id)cutBgImageView;
- (id)imageByCropToRect:source:;
- (void)listenListCollectionScrollOffsetY:;
- (void)setCurOffsetY:;
- (void)setCurrentBgImage:;
- (void)setCutBgImageView:;
- (void).cxx_destruct;
@end
