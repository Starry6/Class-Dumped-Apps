@interface AWEECOMIMCommentMediaCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImgView;
@property (nonatomic) AWEECOMIMCommentTipLabel tipLabel;
@property (nonatomic) UIImageView playIconView;
- (id)coverImgView;
- (void)setCoverImgView:;
- (id)playIconView;
- (void)bindItemData:showTipLabel:imagesCount:;
- (void)setPlayIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
@end
