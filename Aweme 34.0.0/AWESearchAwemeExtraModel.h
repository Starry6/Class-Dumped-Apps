@interface AWESearchAwemeExtraModel : AWEBaseApiModel
@property (nonatomic) AWESearchVideoCommercialGoodModel videoProduct;
@property (nonatomic) AWESearchLiveGoodModel liveProduct;
@property (nonatomic) AWESearchLifeLiveModel lifeLiveInfo;
@property (nonatomic) AWEAwemeSearchExtraVideoFooterLynxModel videoFooter;
@property (nonatomic) AWESearchRelatedPOIModel relatedPOIModel;
@property (nonatomic) BOOL isMusicIntention;
@property (nonatomic) AWEAwemeSearchExtraViewControlModel viewControl;
@property (nonatomic) NSDictionary logImpression;
@property (nonatomic) NSDictionary logDict;
@property (nonatomic) NSDictionary enterInnerInfo;
@property (nonatomic) AWEDynamicPatchModel dynamicHeader;
@property (nonatomic) AWEDynamicPatchModel dynamicBody;
@property (nonatomic) AWEDynamicPatchModel dynamicFooter;
@property (nonatomic) NSString searchTag;
@property (nonatomic) AWESearchPOIStruct poiStruct;
@property (nonatomic) AWESearchVideoKeySegmentModel keySegmentModel;
@property (nonatomic) NSString aiVideoTitle;
@property (nonatomic) BOOL disableSearchOuterAnchorShow;
@property (nonatomic) AWESearchVideoNoteModel videoNoteModel;
@property (nonatomic) AWESearchVideoNoteV2Model videoNoteModelV2;
@property (nonatomic) AWEECommerceSearchCardBTMModel cardBTMModel;
@property (nonatomic) q docRank;
@property (nonatomic) AWEAwemeSearchVideoVideoSummaryModel videoSummaryModel;
@property (nonatomic) AWEAwemeSearchVideoAiDescModel videoAiDesc;
@property (nonatomic) NSString generalAbstract;
@property (nonatomic) AWESearchVideoPanelPrefixModel videoPanelPrefix;
@property (nonatomic) q chapterListRepack;
@property (nonatomic) AWESearchVideoPanelPrefixModel videoPanelSuffix;
@property (nonatomic) AWESearchAwemeExtraLifeRateInfoModel lifeRateInfoModel;
- (id)logDict;
- (void)setLogDict:;
- (id)viewControl;
- (void)setViewControl:;
- (id)liveProduct;
- (id)cardBTMModel;
- (id)enterInnerInfo;
- (id)logImpression;
- (id)videoFooter;
- (id)videoProduct;
- (BOOL)isMusicIntention;
- (id)searchTag;
- (void)setSearchTag:;
- (long long)chapterListRepack;
- (id)generalAbstract;
- (id)lifeLiveInfo;
- (id)poiStruct;
- (void)setPoiStruct:;
- (id)dynamicHeader;
- (id)dynamicFooter;
- (void)updateLogData:;
- (void)setVideoProduct:;
- (void)setLiveProduct:;
- (void)setLifeLiveInfo:;
- (void)setVideoFooter:;
- (id)relatedPOIModel;
- (void)setRelatedPOIModel:;
- (void)setIsMusicIntention:;
- (void)setLogImpression:;
- (void)setEnterInnerInfo:;
- (void)setDynamicHeader:;
- (void)setDynamicBody:;
- (void)setDynamicFooter:;
- (id)keySegmentModel;
- (void)setKeySegmentModel:;
- (id)aiVideoTitle;
- (void)setAiVideoTitle:;
- (BOOL)disableSearchOuterAnchorShow;
- (void)setDisableSearchOuterAnchorShow:;
- (id)videoNoteModel;
- (void)setVideoNoteModel:;
- (id)videoNoteModelV2;
- (void)setVideoNoteModelV2:;
- (void)setCardBTMModel:;
- (long long)docRank;
- (void)setDocRank:;
- (id)videoSummaryModel;
- (void)setVideoSummaryModel:;
- (id)videoAiDesc;
- (void)setVideoAiDesc:;
- (void)setGeneralAbstract:;
- (id)videoPanelPrefix;
- (void)setVideoPanelPrefix:;
- (void)setChapterListRepack:;
- (id)videoPanelSuffix;
- (void)setVideoPanelSuffix:;
- (id)lifeRateInfoModel;
- (void)setLifeRateInfoModel:;
- (void).cxx_destruct;
- (id)dynamicBody;
+ (id)videoProductJSONTransformer;
+ (id)lifeLiveInfoJSONTransformer;
+ (id)liveProductJSONTransformer;
+ (id)videoFooterJSONTransformer;
+ (id)viewControlJSONTransformer;
+ (id)dynamicHeaderJSONTransformer;
+ (id)dynamicBodyJSONTransformer;
+ (id)dynamicFooterJSONTransformer;
+ (id)poiStructJSONTransformer;
+ (id)relatedPOIModelJSONTransformer;
+ (id)keySegmentModelJSONTransformer;
+ (id)videoNoteModelJSONTransformer;
+ (id)videoNoteModelV2JSONTransformer;
+ (id)cardBTMModelJSONTransformer;
+ (id)videoSummaryModelJSONTransformer;
+ (id)videoPanelPrefixJSONTransformer;
+ (id)videoPanelSuffixJSONTransformer;
+ (id)videoAiDescModelJSONTransformer;
+ (id)lifeRateInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
