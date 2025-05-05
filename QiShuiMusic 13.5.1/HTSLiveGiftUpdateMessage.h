@interface HTSLiveGiftUpdateMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger updateType;
@property (nonatomic) GPBInt64Array updateGiftIdsArray;
@property (nonatomic) Q updateGiftIdsArray_Count;
@property (nonatomic) GPBInt64Array updateAssetIdsArray;
@property (nonatomic) Q updateAssetIdsArray_Count;
+ (id)descriptor;
@end
