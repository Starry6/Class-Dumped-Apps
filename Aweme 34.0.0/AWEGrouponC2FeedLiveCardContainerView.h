@interface AWEGrouponC2FeedLiveCardContainerView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL useNewLiveCardStyle;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView liveContentView;
@property (nonatomic) UIView liveInfoView;
@property (nonatomic) BDImageView liveIconImageView;
@property (nonatomic) AWEGradientView liveIconBgGradientView;
@property (nonatomic) UILabel liveTextLabel;
@property (nonatomic) UIView videoTagView;
@property (nonatomic) UILabel videoTagLabel;
@property (nonatomic) AWEGrouponC2FeedAnchorView anchorView;
@property (nonatomic) AWEGouponC2FeedDualAnchorContainerView anchorV2View;
@property (nonatomic) AWEGradientView anchorGradientView;
@property (nonatomic) UIView liveContentInfoView;
@property (nonatomic) UIImageView liveContentInfoIcon;
@property (nonatomic) UILabel liveContentInfoTagLabel;
@property (nonatomic) UIView liveContentInfoSplitLine;
@property (nonatomic) UIImageView spLineImg;
@property (nonatomic) UILabel liveContentInfoText;
@property (nonatomic) UIImageView userIconImageView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UIView userInfoView;
@property (nonatomic) UIImageView hotIconImageView;
@property (nonatomic) UILabel hotCountLabel;
@property (nonatomic) UIView hotInfoView;
@property (nonatomic) AWEGrouponFeedLiveExperimentView experimentView;
@property (nonatomic) AWEGrouponC2FeedLiveLargeCardProductView productCardView;
@property (nonatomic) UILabel liveTitle;
@property (nonatomic) AWEGradientView largeCardBottomGradientView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (id)liveTitle;
- (void)setLiveTitle:;
- (void)setUserInfoView:;
- (BOOL)shouldShowAnchorView;
- (id)liveInfoView;
- (id)hotIconImageView;
- (void)setHotIconImageView:;
- (id)videoTagView;
- (void)setVideoTagView:;
- (id)productCardView;
- (void)setProductCardView:;
- (id)liveTextLabel;
- (void)setLiveTextLabel:;
- (id)videoTagLabel;
- (id)userIconImageView;
- (void)setUserIconImageView:;
- (void)setVideoTagLabel:;
- (void)shouldHiddenAdLabel:;
- (id)anchorGradientView;
- (id)spLineImg;
- (void)setSpLineImg:;
- (void)setAnchorGradientView:;
- (id)infoNumberWithCount:;
- (void)setupLargeCardUI;
- (void)setupLargeCardLayout;
- (id)liveIconBgGradientView;
- (id)liveIconImageView;
- (id)anchorV2View;
- (void)setExperimentView:;
- (id)largeCardBottomGradientView;
- (id)hotInfoView;
- (id)hotCountLabel;
- (BOOL)useNewLiveCardStyle;
- (BOOL)shouldShowExperimentView;
- (id)experimentView;
- (BOOL)shouldShowAdLabel;
- (void)setUseNewLiveCardStyle:;
- (void)updateLargeCardWithModel:;
- (void)updateNormalCardWithModel:;
- (void)setUpVCWithModel:;
- (void)updateContainerViewInfoWithModel:;
- (void)updateLiveContentView:;
- (void)didPreviewStreamStartPlay;
- (void)didRemoveLiveContentView;
- (id)coverFrame;
- (id)liveContentInfoView;
- (id)liveContentInfoIcon;
- (id)liveContentInfoTagLabel;
- (id)liveContentInfoSplitLine;
- (id)liveContentInfoText;
- (void)setLiveInfoView:;
- (void)setLiveIconImageView:;
- (void)setLiveIconBgGradientView:;
- (void)setAnchorV2View:;
- (void)setLiveContentInfoView:;
- (void)setLiveContentInfoIcon:;
- (void)setLiveContentInfoTagLabel:;
- (void)setLiveContentInfoSplitLine:;
- (void)setLiveContentInfoText:;
- (void)setHotCountLabel:;
- (void)setHotInfoView:;
- (void)setLargeCardBottomGradientView:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)anchorView;
- (void)setAnchorView:;
- (void)setupUI;
- (id)liveContentView;
- (void)setLiveContentView:;
- (void)setupLayout;
- (id)userInfoView;
+ (double)coverImageResizeRatio;
+ (double)cardHighWithWidth:model:;
+ (BOOL)canShowLiveTitle:;
+ (BOOL)canShowLiveContentInfo:;
+ (double)cardPadding;
@end
