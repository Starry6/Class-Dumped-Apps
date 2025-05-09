@interface AWEDCFeedCellConfig : AWEDCFeedBaseConfig
@property (nonatomic) NSString imageBizTag;
@property (nonatomic) @? customCoverImageBlock;
@property (nonatomic) @? customCoverImageURLBlock;
@property (nonatomic) @? customImageCacheKeyBlock;
@property (nonatomic) @? customCoverImageOptionsBlock;
@property (nonatomic) @? customPlaceholderImageBlock;
@property (nonatomic) q imageRatioCutType;
@property (nonatomic) @? imageDisplayRatioBlock;
@property (nonatomic) double imageMaxRatio;
@property (nonatomic) double imageMinRatio;
@property (nonatomic) NSArray imageRatios;
@property (nonatomic) AWEDCFeedCellElementViewLayoutInfo imageGenreResourceViewLayoutInfo;
@property (nonatomic) q imageGenreResourceViewPosition;
@property (nonatomic) NSArray imageGenreResourceBanList;
@property (nonatomic) BOOL showNewVideoIcon;
@property (nonatomic) BOOL showResourceIconWhenPlaying;
@property (nonatomic) @? imageElementMaskConfigBuilder;
@property (nonatomic) @? imageElementMaskResourceBuilder;
@property (nonatomic) @? imageElementConfigBuilder;
@property (nonatomic) @? imageElementResourceBuilder;
@property (nonatomic) q resourceReuseCount;
@property (nonatomic) q coverHideType;
@property (nonatomic) @? shouldShowTapGuideBlock;
@property (nonatomic) @? disableShowTagBlock;
@property (nonatomic) q contentElementLines;
@property (nonatomic) BOOL shouldHiddenDescriptionElement;
@property (nonatomic) BOOL useDetermineContentElementLines;
@property (nonatomic) @? descrptionStringBlock;
@property (nonatomic) @? descrptionElementAlphaBlock;
@property (nonatomic) BOOL shouldHiddenActionElement;
@property (nonatomic) @? shouldHiddenCellResourceBlock;
@property (nonatomic) NSString avatarBizTag;
@property (nonatomic) BOOL enableUserInfoInteraction;
@property (nonatomic) @? userInfoExtraUrlParamsBlock;
@property (nonatomic) @? shouldPerformUserTapActionBlock;
@property (nonatomic) BOOL enableDiggInteraction;
@property (nonatomic) NSString diggText;
@property (nonatomic) @? diggLogExtraDictBlock;
@property (nonatomic) @? updateDiggInteractorAndConfigBlock;
@property (nonatomic) @? shouldPerformDiggActionBlock;
@property (nonatomic) @? actionElementConfigBuilder;
@property (nonatomic) @? actionInfoElementAlphaBlock;
@property (nonatomic) @? shouldPerformLongPressActionBlock;
@property (nonatomic) AWEDCFeedCellCommonLynxConfig commonLynxConfig;
@property (nonatomic) AWEDCFeedCellSearchAfterWatchConfig searchAfterWatchConfig;
- (void)setCustomCoverImageBlock:;
- (void)setImageDisplayRatioBlock:;
- (void)setEnableDiggInteraction:;
- (void)setEnableUserInfoInteraction:;
- (void)setImageElementMaskConfigBuilder:;
- (void)setDescrptionStringBlock:;
- (void)setDescrptionElementAlphaBlock:;
- (void)setShouldPerformUserTapActionBlock:;
- (void)setShouldPerformDiggActionBlock:;
- (void)setActionInfoElementAlphaBlock:;
- (void)setShouldPerformLongPressActionBlock:;
- (id)commonLynxConfig;
- (void)setImageGenreResourceBanList:;
- (void)setImageBizTag:;
- (void)setActionElementConfigBuilder:;
- (void)setImageElementConfigBuilder:;
- (void)setAvatarBizTag:;
- (id)diggText;
- (void)setupDefaultConfig;
- (id)shouldPerformLongPressActionBlock;
- (id)shouldShowTapGuideBlock;
- (id)identifierAndPropertyName;
- (void)setImageGenreResourceViewLayoutInfo:;
- (void)setImageGenreResourceViewPosition:;
- (long long)imageGenreResourceViewPosition;
- (id)imageGenreResourceViewLayoutInfo;
- (void)setImageRatioCutType:;
- (void)setContentElementLines:;
- (void)setResourceReuseCount:;
- (void)setCommonLynxConfig:;
- (void)setSearchAfterWatchConfig:;
- (void)setImageMaxRatio:;
- (void)setImageMinRatio:;
- (void)setCoverHideType:;
- (id)imageBizTag;
- (id)customCoverImageBlock;
- (id)customCoverImageURLBlock;
- (void)setCustomCoverImageURLBlock:;
- (id)customImageCacheKeyBlock;
- (void)setCustomImageCacheKeyBlock:;
- (id)customCoverImageOptionsBlock;
- (void)setCustomCoverImageOptionsBlock:;
- (id)customPlaceholderImageBlock;
- (void)setCustomPlaceholderImageBlock:;
- (long long)imageRatioCutType;
- (id)imageDisplayRatioBlock;
- (double)imageMaxRatio;
- (double)imageMinRatio;
- (id)imageRatios;
- (void)setImageRatios:;
- (id)imageGenreResourceBanList;
- (BOOL)showNewVideoIcon;
- (void)setShowNewVideoIcon:;
- (BOOL)showResourceIconWhenPlaying;
- (void)setShowResourceIconWhenPlaying:;
- (id)imageElementMaskConfigBuilder;
- (id)imageElementMaskResourceBuilder;
- (void)setImageElementMaskResourceBuilder:;
- (id)imageElementConfigBuilder;
- (id)imageElementResourceBuilder;
- (void)setImageElementResourceBuilder:;
- (long long)resourceReuseCount;
- (long long)coverHideType;
- (void)setShouldShowTapGuideBlock:;
- (id)disableShowTagBlock;
- (long long)contentElementLines;
- (BOOL)shouldHiddenDescriptionElement;
- (void)setShouldHiddenDescriptionElement:;
- (BOOL)useDetermineContentElementLines;
- (void)setUseDetermineContentElementLines:;
- (id)descrptionStringBlock;
- (id)descrptionElementAlphaBlock;
- (BOOL)shouldHiddenActionElement;
- (void)setShouldHiddenActionElement:;
- (id)shouldHiddenCellResourceBlock;
- (void)setShouldHiddenCellResourceBlock:;
- (id)avatarBizTag;
- (BOOL)enableUserInfoInteraction;
- (id)userInfoExtraUrlParamsBlock;
- (void)setUserInfoExtraUrlParamsBlock:;
- (id)shouldPerformUserTapActionBlock;
- (BOOL)enableDiggInteraction;
- (void)setDiggText:;
- (id)diggLogExtraDictBlock;
- (void)setDiggLogExtraDictBlock:;
- (id)updateDiggInteractorAndConfigBlock;
- (void)setUpdateDiggInteractorAndConfigBlock:;
- (id)shouldPerformDiggActionBlock;
- (id)actionElementConfigBuilder;
- (id)actionInfoElementAlphaBlock;
- (id)searchAfterWatchConfig;
- (void)setDisableShowTagBlock:;
- (void).cxx_destruct;
@end
