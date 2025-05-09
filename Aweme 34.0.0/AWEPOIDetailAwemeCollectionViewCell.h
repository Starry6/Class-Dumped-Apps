@interface AWEPOIDetailAwemeCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView liveTypeTagView;
@property (nonatomic) UILabel liveTypeTagLabel;
@property (nonatomic) CAGradientLayer liveTypeBgLayer;
@property (nonatomic) UIView coverBottomMaskView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView genreIcon;
@property (nonatomic) AWEPOIContentLabel itemTagLabel;
@property (nonatomic) AWEGradientView tagBackgroundView;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UIImageView likeImageView;
@property (nonatomic) UILabel likeNumberLabel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPOIRateComposedContainerView rateView;
@property (nonatomic) UIView rateBackgroundView;
@property (nonatomic) Q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)userImageView;
- (void)setUserImageView:;
- (id)likeImageView;
- (id)likeNumberLabel;
- (void)setLikeImageView:;
- (void)setLikeNumberLabel:;
- (id)liveTypeTagView;
- (id)liveTypeTagLabel;
- (void)setLiveTypeTagLabel:;
- (void)setLiveTypeTagView:;
- (void)p_layoutUI;
- (void)setTagBackgroundView:;
- (id)tagBackgroundView;
- (id)genreIcon;
- (id)coverBottomMaskView;
- (void)p_updateCoverImageView;
- (void)p_updateGenreIcon;
- (void)p_updateUser;
- (void)p_updateLiveTag;
- (id)liveTypeBgLayer;
- (void)setLiveTypeBgLayer:;
- (void)setCoverBottomMaskView:;
- (void)setGenreIcon:;
- (void)updateCellWithModel:constData:index:;
- (id)rateBackgroundView;
- (id)rateView;
- (void)p_updateItemTag;
- (void)p_updateLike;
- (void)updateA11yWithLabel:;
- (id)itemTagLabel;
- (void)setItemTagLabel:;
- (void)setRateView:;
- (void)setRateBackgroundView:;
- (void)setModel:;
- (void)setScene:;
- (id)store;
- (unsigned long long)scene;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
+ (double)cellHeightForModel:withWidth:;
+ (double)coverImageRatioForAweme:;
+ (unsigned long long)p_rateContainerScence;
@end
