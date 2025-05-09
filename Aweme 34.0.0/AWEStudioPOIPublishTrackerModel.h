@interface AWEStudioPOIPublishTrackerModel : NSObject
@property (nonatomic) NSString poiEnterMethod;
@property (nonatomic) NSString defaultSelectedPoiId;
@property (nonatomic) NSString defaultSelectedPoiStyle;
@property (nonatomic) BOOL keepDefaultPoi;
@property (nonatomic) AWEPOIInfoModel selectedPOI;
@property (nonatomic) AWEPOIRecommendActivityModel activity;
@property (nonatomic) NSArray poiStickerIds;
@property (nonatomic) NSArray AIRecommendPOIIdArray;
@property (nonatomic) BOOL isNLPPOI;
@property (nonatomic) BOOL isLocationBasedPOI;
@property (nonatomic) BOOL isCPSRewardPOI;
@property (nonatomic) NSDictionary lastRequestPOILogpb;
@property (nonatomic) NSArray poiRecommendChallengeIDs;
- (id)AIRecommendPOIIdArray;
- (void)setPoiEnterMethod:;
- (id)poiEnterMethod;
- (id)selectedPOI;
- (id)lastRequestPOILogpb;
- (id)defaultSelectedPoiId;
- (void)setDefaultSelectedPoiId:;
- (id)defaultSelectedPoiStyle;
- (void)setDefaultSelectedPoiStyle:;
- (BOOL)keepDefaultPoi;
- (void)setKeepDefaultPoi:;
- (void)setSelectedPOI:;
- (id)poiStickerIds;
- (void)setPoiStickerIds:;
- (void)setAIRecommendPOIIdArray:;
- (BOOL)isNLPPOI;
- (void)setIsNLPPOI:;
- (BOOL)isLocationBasedPOI;
- (void)setIsLocationBasedPOI:;
- (BOOL)isCPSRewardPOI;
- (void)setIsCPSRewardPOI:;
- (void)setLastRequestPOILogpb:;
- (id)poiRecommendChallengeIDs;
- (void)setPoiRecommendChallengeIDs:;
- (id)activity;
- (void).cxx_destruct;
- (void)setActivity:;
@end
