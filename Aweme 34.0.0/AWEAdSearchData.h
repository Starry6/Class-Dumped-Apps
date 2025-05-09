@interface AWEAdSearchData : MTLModel
@property (nonatomic) BOOL showLynxBottomViewMask;
@property (nonatomic) AWEURLModel similarRecommendationTopIconLight;
@property (nonatomic) AWEURLModel similarRecommendationTopIconDark;
@property (nonatomic) AWETagLabelModel similarRecommendationTopTagModel;
@property (nonatomic) AWETagLabelModel similarRecommendationVideoTagModel;
@property (nonatomic) NSString doubleColumnButtonText;
@property (nonatomic) BOOL enableRevealButton;
@property (nonatomic) q descriptionMaxNumberOfRows;
@property (nonatomic) q commentMaxLine;
@property (nonatomic) NSArray kvAbstract;
@property (nonatomic) AWEAdSearchQualityOptimization qualityOptimization;
@property (nonatomic) q disableSearchInnerRerank;
@property (nonatomic) NSDictionary adSuggestWordModelData;
@property (nonatomic) NSArray adQpons;
@property (nonatomic) NSArray insertKeys;
@property (nonatomic) AWESearchAdAlbumAdaptive albumAdaptive;
@property (nonatomic) q commentRow;
@property (nonatomic) AWEAdLabelPositionModel adLabelPositionModel;
@property (nonatomic) BOOL isWeakStyle;
@property (nonatomic) AWEAdSearchComponentDisplayControl componentDisplayControl;
@property (nonatomic) AWEAdSearchImageResolution imageResolution;
@property (nonatomic) AWEAdAlbumShowcaseStyle albumShowcaseStyle;
@property (nonatomic) AWEAdSearchLandingPageSheet landingPageSheet;
@property (nonatomic) BOOL searchParamsPassThrough;
@property (nonatomic) AWEAdSearchVideoParams searchVideoParams;
@property (nonatomic) BOOL cacheImAweme;
@property (nonatomic) q albumBestImageIndex;
@property (nonatomic) NSString videoModule;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isWeakStyle;
- (long long)commentRow;
- (BOOL)enableRevealButton;
- (id)adQpons;
- (long long)albumBestImageIndex;
- (void)setAdQpons:;
- (id)kvAbstract;
- (void)setKvAbstract:;
- (id)adSuggestWordModelData;
- (id)similarRecommendationTopIconLight;
- (id)similarRecommendationTopIconDark;
- (id)similarRecommendationTopTagModel;
- (id)albumShowcaseStyle;
- (BOOL)searchParamsPassThrough;
- (id)insertKeys;
- (id)landingPageSheet;
- (id)videoModule;
- (void)setShowLynxBottomViewMask:;
- (void)setSimilarRecommendationTopIconLight:;
- (void)setSimilarRecommendationTopIconDark:;
- (void)setSimilarRecommendationTopTagModel:;
- (void)setSimilarRecommendationVideoTagModel:;
- (void)setDoubleColumnButtonText:;
- (void)setEnableRevealButton:;
- (void)setDescriptionMaxNumberOfRows:;
- (void)setCommentMaxLine:;
- (void)setQualityOptimization:;
- (void)setDisableSearchInnerRerank:;
- (void)setAdSuggestWordModelData:;
- (void)setInsertKeys:;
- (void)setAlbumAdaptive:;
- (void)setCommentRow:;
- (id)adLabelPositionModel;
- (void)setAdLabelPositionModel:;
- (void)setIsWeakStyle:;
- (void)setComponentDisplayControl:;
- (void)setAlbumShowcaseStyle:;
- (void)setLandingPageSheet:;
- (void)setSearchParamsPassThrough:;
- (void)setSearchVideoParams:;
- (BOOL)cacheImAweme;
- (void)setCacheImAweme:;
- (void)setAlbumBestImageIndex:;
- (void)setVideoModule:;
- (id)qualityOptimization;
- (long long)disableSearchInnerRerank;
- (id)doubleColumnButtonText;
- (id)componentDisplayControl;
- (id)similarRecommendationVideoTagModel;
- (BOOL)showLynxBottomViewMask;
- (id)searchVideoParams;
- (id)albumAdaptive;
- (long long)descriptionMaxNumberOfRows;
- (long long)commentMaxLine;
- (id)init;
- (void).cxx_destruct;
- (id)imageResolution;
- (void)setImageResolution:;
+ (id)adQponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
