@interface HTSLiveGiftCycleReleaseMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q releaseId;
@property (nonatomic) HTSLiveGiftCycleReleaseMessage_GiftIcon giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (nonatomic) GPBInt64Array giftIdsArray;
@property (nonatomic) Q giftIdsArray_Count;
+ (id)descriptor;
@end
