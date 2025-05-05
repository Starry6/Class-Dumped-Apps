@interface IESLiveSaaSPBRivalsRecommendResponse_ResponseData : GPBMessage
@property (nonatomic) IESLiveSaaSPBRivalsRecommendResponse_TabRivals rivals;
@property (nonatomic) BOOL hasRivals;
@property (nonatomic) NSMutableArray tabsArray;
@property (nonatomic) Q tabsArray_Count;
@property (nonatomic) IESLiveSaaSPBRivalsRecommendResponse_SearchBar searchBar;
@property (nonatomic) BOOL hasSearchBar;
@property (nonatomic) NSInteger skinType;
@property (nonatomic) IESLiveSaaSPBRivalsRecommendResponse_TopTip topTip;
@property (nonatomic) BOOL hasTopTip;
@property (nonatomic) BOOL previewLiveStream;
@property (nonatomic) BOOL acceptPrecisionMatch;
@property (nonatomic) IESLiveSaaSPBRivalsRecommendResponse_PanelBanner panelBanner;
@property (nonatomic) BOOL hasPanelBanner;
@property (nonatomic) BOOL openLocation;
@property (nonatomic) NSString curActivityName;
@property (nonatomic) BOOL isNewAnchor;
@property (nonatomic) BOOL displayMultiMatch;
@property (nonatomic) q tabLocate;
@property (nonatomic) q durationTime;
@property (nonatomic) NSMutableDictionary abTestValueMap;
@property (nonatomic) Q abTestValueMap_Count;
@property (nonatomic) q loadType;
@property (nonatomic) NSString multiBrawlInfo;
@property (nonatomic) BOOL isNewPkAnchor;
+ (id)descriptor;
@end
