@interface AWEFeedBottomShootUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)trendShootSameCommonTrackParamsWithReferString:enterFrom:detailBottomInfoDict:awemeModel:trendInfoModel:;
+ (id)trendShootSameExtraInfoWithDetailBottomInfoDict:outerAwemeModel:innerAwemeModel:;
+ (id)detailBottomViewMusicShootSameCommonTrackParamsWithReferString:enterFrom:detailBottomInfoDict:awemeModel:;
+ (id)detailBottomViewMusicShootSameCommonMusicInfoWithDetailBottomInfoDict:awemeModel:;
+ (void)trackForDetailPageClickShootSameForSchemaWithDetailPageName:shootSameSchemaType:extraInfo:;
+ (void)extractTrendsInfoFrom:toDictionary:ignoreFlashMob:;
+ (void)overrideAwemeRelatedInfo:toDictionary:;
+ (id)transferShootSameTypeToStringFormatWithIntType:;
+ (id)detailBottomViewMusicShootSameOriginVideoInfoWithDetailBottomInfoDict:awemeModel:;
@end
