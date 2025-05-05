@interface HTSLiveCurrentOrderSingItemV2 : IESLivePBBaseMessage
@property (nonatomic) HTSLiveOrderSingItemV2 currentSingItem;
@property (nonatomic) BOOL hasCurrentSingItem;
@property (nonatomic) HTSLiveMicrophoneTaskDataV2 microphoneTaskData;
@property (nonatomic) BOOL hasMicrophoneTaskData;
+ (id)descriptor;
@end
