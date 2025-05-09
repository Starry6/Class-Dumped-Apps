@interface AWETeenFeedDoubleColumnCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIImageView failedImageView;
@property (nonatomic) UIStackView contentStackView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UIImageView authorThumbView;
@property (nonatomic) UIImageView likeIcon;
@property (nonatomic) UILabel likeNumberLabel;
@property (nonatomic) UIView authorAndLikeContainerView;
@property (nonatomic) UIView likeInteractionView;
@property (nonatomic) UIView authorInteractionView;
@property (nonatomic) UIImageView albumIcon;
@property (nonatomic) UIImageView collectionIcon;
@property (nonatomic) UIView recommendTagContainerView;
@property (nonatomic) UIImageView subscribeIconView;
@property (nonatomic) UILabel subscribeLabel;
@property (nonatomic) LOTAnimationView likeAnimationView;
@property (nonatomic) BOOL isDigging;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWETeenFeedDoubleColumnViewController doubleColumnVC;
@property (nonatomic) q showOrder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (id)likeNumberLabel;
- (void)setLikeNumberLabel:;
- (id)failedImageView;
- (void)setFailedImageView:;
- (id)coverImageViewBackgroundColor;
- (void)setLikeAnimationView:;
- (id)likeAnimationView;
- (void)p_setupViews;
- (void)p_setupConstraints;
- (id)doubleColumnVC;
- (void)p_addNotification;
- (void)setDoubleColumnVC:;
- (id)likeIcon;
- (BOOL)isDigging;
- (void)setIsDigging:;
- (id)albumIcon;
- (void)setShowOrder:;
- (long long)showOrder;
- (void)didUpdateSubscribeStatus:secUserID:;
- (void)p_onAwemeDiggNotification:;
- (void)didFinishCollectWithItemID:actionType:collectCount:;
- (void)p_setupTitleLabelText:;
- (id)recommendTagContainerView;
- (void)p_addBindObserver;
- (void)p_loadCoverImageView;
- (void)p_loadAuthorThumbView;
- (id)collectionIcon;
- (id)authorInteractionView;
- (id)likeInteractionView;
- (id)subscribeIconView;
- (id)subscribeLabel;
- (id)authorAndLikeContainerView;
- (id)authorThumbView;
- (id)collectionViewCellBackgroundColor;
- (void)p_setLikeLabelString;
- (void)p_updateLikeIcon:;
- (void)enterAuthorPage;
- (void)p_likeActionWithAnimation:;
- (void)p_trackSquareLike:;
- (void)p_likeAnimationWithStatus:requestFailed:animated:;
- (id)authorThumbViewBackgroundColor;
- (id)authorNameLabelColor;
- (id)likeNameLabelColor;
- (void)tapLikeIcon:;
- (void)tapAuthorThumbView:;
- (void)setAuthorThumbView:;
- (void)setAuthorAndLikeContainerView:;
- (void)setLikeInteractionView:;
- (void)setAuthorInteractionView:;
- (void)setCollectionIcon:;
- (void)setRecommendTagContainerView:;
- (void)setSubscribeIconView:;
- (void)setSubscribeLabel:;
- (void)setAlbumIcon:;
- (void)setLikeIcon:;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)titleLabelColor;
- (id)contentStackView;
- (void)setContentStackView:;
@end
