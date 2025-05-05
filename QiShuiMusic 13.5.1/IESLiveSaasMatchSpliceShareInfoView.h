@interface IESLiveSaasMatchSpliceShareInfoView : UIView
@property (nonatomic) UIImageView matchInfoImageView;
@property (nonatomic) IESLiveSaaSGradientView bottomMaskView;
@property (nonatomic) UILabel longPicTips;
@property (nonatomic) UIImage targetImage;
@property (nonatomic) q margin;
- (void)setLongPicTips:;
- (id)bottomMaskView;
- (id)compressImage:withTargetSize:;
- (id)initWithTargetImage:;
- (id)longPicTips;
- (id)matchInfoImageView;
- (void)setBottomMaskView:;
- (void)setMatchInfoImageView:;
- (void)layoutSubviews;
- (long long)margin;
- (void)setMargin:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)targetImage;
- (void)setTargetImage:;
@end
