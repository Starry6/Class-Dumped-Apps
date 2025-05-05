@interface IESLivePinCommentMicroAppCell : IESLivePinCommentBaseCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveImageView coverImgView;
- (id)paramsWithNode:;
- (void)configWithNode:containerWidth:;
- (id)coverImgView;
- (void)setCoverImgView:;
- (void)setupSubViews;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)titleLabel;
@end
