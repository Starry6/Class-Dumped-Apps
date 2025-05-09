@interface RivalsRecommendResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) RivalsRecommendResponse_TabRivals rivals;
@property (nonatomic) BOOL hasRivals;
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q tabsArray_Count;
@property (nonatomic) RivalsRecommendResponse_SearchBar searchBar;
@property (nonatomic) BOOL hasSearchBar;
@property (nonatomic) RivalsRecommendResponse_TipBar tipBar;
@property (nonatomic) BOOL hasTipBar;
@property (nonatomic) NSInteger skinType;
@property (nonatomic) RivalsRecommendResponse_TopTip topTip;
@property (nonatomic) BOOL hasTopTip;
@property (nonatomic) BOOL previewLiveStream;
@property (nonatomic) BOOL acceptPrecisionMatch;
@property (nonatomic) RivalsRecommendResponse_PanelBanner panelBanner;
@property (nonatomic) BOOL hasPanelBanner;
@property (nonatomic) BOOL openLocation;
@property (nonatomic) NSMutableArray topDynamicTabsArray;
@property (nonatomic) Q topDynamicTabsArray_Count;
@property (nonatomic) NSString curActivityName;
@property (nonatomic) ActivityPKConf dynamicConf;
@property (nonatomic) BOOL hasDynamicConf;
@property (nonatomic) ActivityUser self_p;
@property (nonatomic) BOOL hasSelf_p;
@property (nonatomic) BOOL isNewAnchor;
@property (nonatomic) RivalsRecommendResponse_CommonBanner commonBanner;
@property (nonatomic) BOOL hasCommonBanner;
@property (nonatomic) RivalsRecommendResponse_AutoMatchInfo matchInfo;
@property (nonatomic) BOOL hasMatchInfo;
@property (nonatomic) BOOL displayMultiMatch;
@property (nonatomic) q tabLocate;
@property (nonatomic) q durationTime;
@property (nonatomic) NSMutableArray flexActivitiesArray;
@property (nonatomic) Q flexActivitiesArray_Count;
@property (nonatomic) NSMutableDictionary abTestValueMap;
@property (nonatomic) Q abTestValueMap_Count;
@property (nonatomic) q loadType;
@property (nonatomic) NSString multiBrawlInfo;
@property (nonatomic) BOOL isNewPkAnchor;
@property (nonatomic) NSMutableArray pkSubTabsArray;
@property (nonatomic) Q pkSubTabsArray_Count;
@property (nonatomic) RivalsRecommendResponse_RivalsExtra rivalsExtra;
@property (nonatomic) BOOL hasRivalsExtra;
@property (nonatomic) NSString pkSeasonInfo;
+ (id)descriptor;
@end
