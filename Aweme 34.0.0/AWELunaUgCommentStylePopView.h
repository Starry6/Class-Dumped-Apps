@interface AWELunaUgCommentStylePopView : AWELunaUgPopView
@property (nonatomic) UIImageView playIconImageView;
@property (nonatomic) UIImageView songCoverImageView;
@property (nonatomic) UIView songCoverShadowView;
@property (nonatomic) YYLabel relatedMusicTagLabel;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIView titleArrowIcon;
@property (nonatomic) UILabel authorLabel;
@property (nonatomic) UILabel likeInfoLabel;
@property (nonatomic) AWELunaUgCommentContentView commentContentView;
@property (nonatomic) UILabel commentCountLabel;
@property (nonatomic) UILabel commentInfoLabel;
@property (nonatomic) UITableView commentTableView;
@property (nonatomic) UITableView loadingTableView;
@property (nonatomic) AWELunaUgCommentPopViewSlogan slogan;
@property (nonatomic) BOOL loadFailed;
@property (nonatomic) CALayer topCircularGradientLayer;
@property (nonatomic) CALayer imageGradientLayer;
@property (nonatomic) CALayer backgroundGradientLayer;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) NSArray mockCommentArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverImage:;
- (void)setAuthorLabel:;
- (id)authorLabel;
- (BOOL)loadFailed;
- (id)playIconImageView;
- (void)setPlayIconImageView:;
- (id)commentCountLabel;
- (void)setCommentCountLabel:;
- (id)titleArrowIcon;
- (void)setTitleArrowIcon:;
- (id)commentContentView;
- (void)setCommentContentView:;
- (id)slogan;
- (void)setSlogan:;
- (id)shuffleArray:;
- (void)p_didClickCover;
- (id)songCoverImageView;
- (id)topCircularGradientLayer;
- (void)setTopCircularGradientLayer:;
- (void)didClickDiggIcon;
- (void)didClickContent;
- (void)configureBaseSettings;
- (id)songCoverShadowView;
- (id)likeInfoLabel;
- (id)commentInfoLabel;
- (id)loadingTableView;
- (id)commentTableView;
- (id)relatedMusicTagLabel;
- (void)p_addPopViewLayerIfNeeded;
- (BOOL)p_canShowRealComment;
- (double)p_widthOfRelationUserLabel;
- (id)imageGradientLayer;
- (void)setImageGradientLayer:;
- (id)mockCommentArray;
- (void)p_didClickSlogan;
- (void)p_didClickPlayIcon;
- (id)p_mockSettingsConfig;
- (id)p_defaultArr;
- (id)p_mockCommentArray;
- (void)setSongCoverImageView:;
- (void)setSongCoverShadowView:;
- (void)setRelatedMusicTagLabel:;
- (void)setLikeInfoLabel:;
- (void)setCommentInfoLabel:;
- (void)setCommentTableView:;
- (void)setLoadingTableView:;
- (void)setLoadFailed:;
- (void)setMockCommentArray:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)initWithConfig:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)updateWithConfig:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:;
- (id)coverImage;
- (void)setUpUI;
@end
