@interface IESECProductUpdateMessage : GPBMessage
@property (nonatomic) GPBInt64Array updatedProductIdsArray;
@property (nonatomic) Q updatedProductIdsArray_Count;
@property (nonatomic) NSInteger updateType;
@property (nonatomic) q promotionId;
@property (nonatomic) IESECUpdatedProductInfo updatedProductInfo;
@property (nonatomic) BOOL hasUpdatedProductInfo;
@property (nonatomic) BOOL soldOut;
@property (nonatomic) IESECUpdatedCouponInfo updatedCouponInfo;
@property (nonatomic) BOOL hasUpdatedCouponInfo;
@property (nonatomic) IESECUpdatedCampaignInfo updatedCampaignInfo;
@property (nonatomic) BOOL hasUpdatedCampaignInfo;
@property (nonatomic) q updateTimestamp;
@property (nonatomic) IESECUpdatedSkuInfo updateSkuInfo;
@property (nonatomic) BOOL hasUpdateSkuInfo;
@property (nonatomic) IESECUpdatedCommentaryVideoInfo updatedCommentaryVideoInfo;
@property (nonatomic) BOOL hasUpdatedCommentaryVideoInfo;
@property (nonatomic) IESECUpdatedGroupInfo updatedGroupInfo;
@property (nonatomic) BOOL hasUpdatedGroupInfo;
@property (nonatomic) IESECHotAtmosphere hotAtmosphere;
@property (nonatomic) BOOL hasHotAtmosphere;
@property (nonatomic) BOOL canSold;
@property (nonatomic) IESECInteractionData promotionHeaderInteraction;
@property (nonatomic) BOOL hasPromotionHeaderInteraction;
+ (id)descriptor;
@end
