@interface IESECGoodsDetailMiniPreview : UIView
@property (nonatomic) IESECUIImageView coverImgView;
@property (nonatomic) IESECUIImageView mainPreview;
@property (nonatomic) IESECUIImageView bottomPreview;
- (void)setMainPreview:;
- (id)bottomPreview;
- (id)coverImgView;
- (id)mainPreview;
- (void)setBottomPreview:;
- (void)setCoverImgView:;
- (void)updateWithCover:;
- (void)dismiss;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
@end
