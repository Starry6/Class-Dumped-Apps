@interface AWEFeedVideoSingleCardLayoutAdjuster : NSObject
@property (nonatomic) q adjustType;
@property (nonatomic) {CGSize=dd} avatarSize;
@property (nonatomic) UIFont authorNameFont;
@property (nonatomic) double authorNameFontSize;
@property (nonatomic) UIFont publishTimeFont;
@property (nonatomic) double publishTimeFontSize;
@property (nonatomic) BOOL feedbackAlignName;
@property (nonatomic) UIFont descFont;
@property (nonatomic) double descFontSize;
@property (nonatomic) double contentLineHeight;
@property (nonatomic) double contentBottomMargin;
@property (nonatomic) BOOL hashTagNoBold;
@property (nonatomic) double videoCornerRadius;
@property (nonatomic) double bottomBarHeight;
@property (nonatomic) {CGSize=dd} bottomBarIconSize;
@property (nonatomic) UIFont bottomBarTextFont;
@property (nonatomic) double bottomBarLeftMargin;
@property (nonatomic) double bottomBarRightMargin;
@property (nonatomic) double bottomBarImageTextMagin;
@property (nonatomic) double bottomBarTextArrowMagin;
@property (nonatomic) BOOL bottomBarAddBlurView;
@property (nonatomic) UIFont timeLblFont;
@property (nonatomic) {CGSize=dd} playButtonIconSize;
@property (nonatomic) double playButtonRightBottomMargin;
@property (nonatomic) BOOL timeLabelCloseToPlayButton;
@property (nonatomic) AWEMarkViewUIConfigModel anchorUIConfigModel;
@property (nonatomic) double actionPanelLeadingTrailingMargin;
@property (nonatomic) double actionPanelHeight;
@property (nonatomic) {CGSize=dd} actionPanelButtonIconSize;
@property (nonatomic) UIFont actionPanelButtonTextFont;
@property (nonatomic) BOOL isNeedAdjustLayout;
@property (nonatomic) AWEConcernCardModel cardModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (void)setCardModel:;
- (id)descFont;
- (void)setDescFont:;
- (id)initWithCardModel:;
- (double)actionPanelHeight;
- (double)bottomBarLeftMargin;
- (id)bottomBarIconSize;
- (double)bottomBarImageTextMagin;
- (double)bottomBarTextArrowMagin;
- (double)bottomBarRightMargin;
- (void)setAdjustType:;
- (long long)adjustType;
- (double)descFontSize;
- (void)setDescFontSize:;
- (id)bottomBarTextFont;
- (void)configDefaultData:;
- (BOOL)isNeedAdjustLayout;
- (id)videoAreaCutWithContainerWidth:videoRawSize:;
- (id)authorNameFont;
- (void)setAuthorNameFont:;
- (double)authorNameFontSize;
- (void)setAuthorNameFontSize:;
- (id)publishTimeFont;
- (void)setPublishTimeFont:;
- (double)publishTimeFontSize;
- (void)setPublishTimeFontSize:;
- (BOOL)feedbackAlignName;
- (void)setFeedbackAlignName:;
- (double)contentLineHeight;
- (void)setContentLineHeight:;
- (BOOL)hashTagNoBold;
- (void)setHashTagNoBold:;
- (double)videoCornerRadius;
- (void)setVideoCornerRadius:;
- (void)setBottomBarIconSize:;
- (void)setBottomBarTextFont:;
- (void)setBottomBarLeftMargin:;
- (void)setBottomBarRightMargin:;
- (void)setBottomBarImageTextMagin:;
- (void)setBottomBarTextArrowMagin:;
- (BOOL)bottomBarAddBlurView;
- (void)setBottomBarAddBlurView:;
- (id)timeLblFont;
- (void)setTimeLblFont:;
- (id)playButtonIconSize;
- (void)setPlayButtonIconSize:;
- (double)playButtonRightBottomMargin;
- (void)setPlayButtonRightBottomMargin:;
- (BOOL)timeLabelCloseToPlayButton;
- (void)setTimeLabelCloseToPlayButton:;
- (id)anchorUIConfigModel;
- (void)setAnchorUIConfigModel:;
- (double)actionPanelLeadingTrailingMargin;
- (void)setActionPanelLeadingTrailingMargin:;
- (void)setActionPanelHeight:;
- (id)actionPanelButtonIconSize;
- (void)setActionPanelButtonIconSize:;
- (id)actionPanelButtonTextFont;
- (void)setActionPanelButtonTextFont:;
- (void)setIsNeedAdjustLayout:;
- (void).cxx_destruct;
- (id)avatarSize;
- (void)setAvatarSize:;
- (double)bottomBarHeight;
- (void)setBottomBarHeight:;
- (double)contentBottomMargin;
- (void)setContentBottomMargin:;
+ (long long)layoutAdjustType;
@end
