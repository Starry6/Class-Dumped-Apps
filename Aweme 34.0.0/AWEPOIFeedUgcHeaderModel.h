@interface AWEPOIFeedUgcHeaderModel : MTLModel
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasExpandButton;
@property (nonatomic) BOOL forceHideExpandButton;
@property (nonatomic) AWEPOIFeedUgcTagModel expandButtonTag;
@property (nonatomic) double cellHeight;
@property (nonatomic) NSNumber collapsedCellHeight;
@property (nonatomic) NSNumber expandedCellHeight;
@property (nonatomic) NSNumber collapsedCellHeightFromIsolated;
@property (nonatomic) NSNumber expandedCellHeightFromIsolated;
@property (nonatomic) BOOL hiddenInfo;
@property (nonatomic) NSNumber infoCardHeight;
@property (nonatomic) NSNumber infoHeight;
@property (nonatomic) NSNumber infoCardHeightFromIsolated;
@property (nonatomic) NSNumber infoHeightFromIsolated;
@property (nonatomic) NSNumber impressionTagsHeight;
@property (nonatomic) NSNumber collapsedTagsHeight;
@property (nonatomic) NSNumber expandedTagsHeight;
@property (nonatomic) NSArray impureTags;
@property (nonatomic) NSArray integratedTags;
@property (nonatomic) NSArray truncatedImpressionTags;
@property (nonatomic) AWEWeakAssociatedObjectWrapper containerBeforeReload;
@property (nonatomic) NSValue contentOffsetBeforeReload;
@property (nonatomic) <AWEPOIDetailFeedUgcTagItemModelProtocol> scrollToTagBeforeReload;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) BOOL hasTrackedExpandingTagShow;
@property (nonatomic) BOOL hasShownUgcReachZero;
@property (nonatomic) NSDictionary abParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q visitedCount;
@property (nonatomic) q effectiveTagRatesCount;
@property (nonatomic) Q recommendedLevel;
@property (nonatomic) NSString recommendedScore;
@property (nonatomic) NSArray tags;
@property (nonatomic) NSArray userAvatars;
@property (nonatomic) NSString recommendedPopupUrl;
@property (nonatomic) NSArray impressions;
@property (nonatomic) NSString loadMoreTextTopRight;
@property (nonatomic) NSString loadMoreTextBottom;
@property (nonatomic) q validCount;
@property (nonatomic) NSString headerModuleTitle;
@property (nonatomic) NSDictionary mobParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendedScore;
- (void)setRecommendedScore:;
- (id)abParams;
- (void)setAbParams:;
- (void)setInfoHeight:;
- (id)infoHeight;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (id)trackingParams;
- (id)mobParams;
- (void)setMobParams:;
- (BOOL)hasExpandButton;
- (id)trackingParamsWithConstData:;
- (void)setHasExpandButton:;
- (id)headerModuleTitle;
- (BOOL)forceHideExpandButton;
- (void)setForceHideExpandButton:;
- (double)cellHeightWithIsolatedStatus:;
- (BOOL)hitHeaderAB;
- (id)loadMoreTextTopRight;
- (BOOL)hasShownUgcReachZero;
- (long long)visitedCount;
- (long long)effectiveTagRatesCount;
- (BOOL)hiddenInfo;
- (unsigned long long)recommendedLevel;
- (BOOL)hasTrackedExpandingTagShow;
- (void)setHasTrackedExpandingTagShow:;
- (BOOL)hitTagAB;
- (id)integratedTags;
- (double)impressionTagsTopWithIsolatedStatus:;
- (id)impressionTagsHeight;
- (double)tagsTopWithIsolatedStatus:;
- (double)tagsHeightWithIsolatedStatus:;
- (double)lineTopWithIsolatedStatus:;
- (id)userAvatars;
- (id)recommendedPopupUrl;
- (id)integratedTagsWithIsolatedStatus:;
- (BOOL)isSameSelectedWithTagModel:;
- (id)defaultMixTag;
- (id)selectWithTagModel:;
- (void)setContainerBeforeReload:;
- (void)setContentOffsetBeforeReload:;
- (id)containerBeforeReload;
- (id)contentOffsetBeforeReload;
- (id)scrollToTagBeforeReload;
- (void)setScrollToTagBeforeReload:;
- (id)infoHeightFromIsolated;
- (id)expandedTagsHeight;
- (id)collapsedTagsHeight;
- (void)setCollapsedTagsHeight:;
- (void)setExpandedTagsHeight:;
- (void)setExpandButtonTag:;
- (id)expandButtonTag;
- (void)setImpureTags:;
- (void)setTruncatedImpressionTags:;
- (id)truncatedImpressionTags;
- (id)selectedTagModel;
- (unsigned long long)ugcDisplayStyle;
- (id)selectWithConstData:;
- (void)decreaseTagCountWithKey:;
- (id)resetToSelectDefaultMixTag;
- (void)setHasShownUgcReachZero:;
- (double)floatingBottomWithIsolatedStatus:;
- (BOOL)hitPOIScoreInRateListAB;
- (void)setHiddenInfo:;
- (id)expandedCellHeight;
- (id)collapsedCellHeight;
- (void)setCollapsedCellHeight:;
- (void)setExpandedCellHeight:;
- (id)collapsedCellHeightFromIsolated;
- (void)setCollapsedCellHeightFromIsolated:;
- (id)expandedCellHeightFromIsolated;
- (void)setExpandedCellHeightFromIsolated:;
- (id)infoCardHeight;
- (void)setInfoCardHeight:;
- (id)infoCardHeightFromIsolated;
- (void)setInfoCardHeightFromIsolated:;
- (void)setInfoHeightFromIsolated:;
- (void)setImpressionTagsHeight:;
- (id)impureTags;
- (void)resetTagsTrackStatus;
- (BOOL)hitTitleAB;
- (void)setVisitedCount:;
- (void)setEffectiveTagRatesCount:;
- (void)setRecommendedLevel:;
- (void)setUserAvatars:;
- (void)setRecommendedPopupUrl:;
- (void)setLoadMoreTextTopRight:;
- (id)loadMoreTextBottom;
- (void)setLoadMoreTextBottom:;
- (void)setHeaderModuleTitle:;
- (void)setIsExpanded:;
- (id)tags;
- (BOOL)isExpanded;
- (void)setTags:;
- (id)impressions;
- (void)setImpressions:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)cellHeight;
- (void)recalculateSize;
- (void)setValidCount:;
- (long long)validCount;
- (long long)indexOfTag:;
+ (id)tagsJSONTransformer;
+ (id)impressionsJSONTransformer;
+ (id)userAvatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)mobParamsJSONTransformer;
@end
