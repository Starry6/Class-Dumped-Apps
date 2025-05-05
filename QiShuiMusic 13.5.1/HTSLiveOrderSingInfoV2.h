@interface HTSLiveOrderSingInfoV2 : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userMicrophoneListArray;
@property (nonatomic) Q userMicrophoneListArray_Count;
@property (nonatomic) q giftId;
@property (nonatomic) BOOL autoEnlarge;
@property (nonatomic) NSString currentSingItem;
@property (nonatomic) GPBInt64Array giftIdsArray;
@property (nonatomic) Q giftIdsArray_Count;
@property (nonatomic) HTSLiveOrderSingMVInfo mvInfo;
@property (nonatomic) BOOL hasMvInfo;
+ (id)descriptor;
@end
