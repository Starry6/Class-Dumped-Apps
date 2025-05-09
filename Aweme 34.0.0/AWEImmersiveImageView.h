@interface AWEImmersiveImageView : UIView
@property (nonatomic) AWEConcernGoodsCardBlurCommentView commentView;
@property (nonatomic) AWEBlurGradientView goodsImageSkeletonView;
@property (nonatomic) UIImageView goodsImageLoadFailedImageView;
@property (nonatomic) UIImageView topCoveredImageView;
@property (nonatomic) AWEBlurGradientView topCoveredPlaceholderView;
@property (nonatomic) UIImageView midCoveredImageView;
@property (nonatomic) AWEBlurGradientView midCoveredPlaceholderView;
@property (nonatomic) NSString goodsCardDetailSchema;
@property (nonatomic) AWEConcernGoodsLifeFeedSpu goodsModel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? merchantDetailBlock;
- (void)__setupUI;
- (id)goodsModel;
- (void)setGoodsModel:;
- (void)setCommentView:;
- (id)commentView;
- (void)__buildUI;
- (void)setMerchantDetailBlock:;
- (void)startCardAnimation;
- (void)configWithCardModel:goodsImageLoadCompletion:topCoverImageLoadCompletion:midCoverImageLoadCompletion:;
- (id)merchantDetailBlock;
- (void)setGoodsCardDetailSchema:;
- (id)goodsCardDetailSchema;
- (id)goodsImageLoadFailedImageView;
- (void)setGoodsImageLoadFailedImageView:;
- (void)setGoodsImageSkeletonView:;
- (void)setTopCoveredImageView:;
- (void)setTopCoveredPlaceholderView:;
- (void)setMidCoveredImageView:;
- (void)setMidCoveredPlaceholderView:;
- (id)goodsImageSkeletonView;
- (id)topCoveredImageView;
- (id)topCoveredPlaceholderView;
- (id)midCoveredImageView;
- (id)midCoveredPlaceholderView;
- (void)setUpSkeletonView;
- (void)setUpImmersiveEffectWithCardModel:topCoverImageLoadCompletion:midCoverImageLoadCompletion:;
- (id)createGradientImageView;
- (void)setUpTopMaskViewWithCardModel:topCoverImageLoadCompletion:;
- (void)setUpMidMaskViewWithCardModel:midCoverImageLoadCompletion:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
@end
