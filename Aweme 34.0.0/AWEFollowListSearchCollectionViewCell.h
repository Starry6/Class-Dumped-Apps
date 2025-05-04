@interface AWEFollowListSearchCollectionViewCell : AWEFollowListUserBaseCell
@property (nonatomic) UIButton moreButtonView;
@property (nonatomic) NSArray avatar168FromThumbnailURLs;
@property (nonatomic) BOOL showMoreButton;
- (void)setShowOnlineDotView:;
- (id)moreButtonView;
- (void)__moreButtonClicked;
- (void)setAvatar168FromThumbnailURLs:;
- (id)avatar168FromThumbnailURLs;
- (void)setMoreButtonView:;
- (id)initWithFrame:;
- (BOOL)showMoreButton;
- (void).cxx_destruct;
- (void)setShowMoreButton:;
- (void)setupUI;
+ (id)defaultImage;
@end
