@interface IESLiveSaaSPBLiveShoppingMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) q promotionId;
@property (nonatomic) NSInteger bubbleType;
@property (nonatomic) q screenshotTimestamp;
@property (nonatomic) NSMutableArray targetOpenIdArray;
@property (nonatomic) Q targetOpenIdArray_Count;
@property (nonatomic) NSString ecomNotice;
@property (nonatomic) GPBInt64Array updatedProductIdsArray;
@property (nonatomic) Q updatedProductIdsArray_Count;
@property (nonatomic) NSInteger updateType;
@property (nonatomic) IESLiveSaaSPBUpdatedProductInfo updatedProductInfo;
@property (nonatomic) BOOL hasUpdatedProductInfo;
@property (nonatomic) BOOL soldOut;
@property (nonatomic) IESLiveSaaSPBUpdatedCouponInfo updatedCouponInfo;
@property (nonatomic) BOOL hasUpdatedCouponInfo;
@property (nonatomic) IESLiveSaaSPBUpdatedCampaignInfo updatedCampaignInfo;
@property (nonatomic) BOOL hasUpdatedCampaignInfo;
@property (nonatomic) q updateTimestamp;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) q promotionsNum;
@property (nonatomic) IESLiveSaaSPBUpdatedSkuInfo updateSkuInfo;
@property (nonatomic) BOOL hasUpdateSkuInfo;
@property (nonatomic) IESLiveSaaSPBUpdatedCommentaryVideoInfo updatedCommentaryVideoInfo;
@property (nonatomic) BOOL hasUpdatedCommentaryVideoInfo;
@property (nonatomic) IESLiveSaaSPBUpdatedGroupInfo updatedGroupInfo;
@property (nonatomic) BOOL hasUpdatedGroupInfo;
@property (nonatomic) NSString commerceAuthorityChangeToast;
@property (nonatomic) IESLiveSaaSPBTraceTimeMetric traceTimeMetric;
@property (nonatomic) BOOL hasTraceTimeMetric;
@property (nonatomic) IESLiveSaaSPBWinLotteryInfo winLotteryinfo;
@property (nonatomic) BOOL hasWinLotteryinfo;
@property (nonatomic) IESLiveSaaSPBLotteryInfoList lotteryInfoList;
@property (nonatomic) BOOL hasLotteryInfoList;
@property (nonatomic) BOOL canSold;
+ (id)descriptor;
@end
