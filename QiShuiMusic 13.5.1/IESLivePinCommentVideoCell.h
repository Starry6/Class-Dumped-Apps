@interface IESLivePinCommentVideoCell : IESLivePinCommentBaseCell
@property (nonatomic) IESLiveImageView coverImgView;
@property (nonatomic) IESLiveImageView playIcon;
@property (nonatomic) IESLivePinCommentCheckTipView checkTipView;
- (id)checkTipView;
- (void)configWithNode:containerWidth:;
- (id)coverImgView;
- (id)playIcon;
- (void)setCheckTipView:;
- (void)setCoverImgView:;
- (void)setPlayIcon:;
- (void)setupSubViews;
- (void)prepareForReuse;
- (void).cxx_destruct;
@end
