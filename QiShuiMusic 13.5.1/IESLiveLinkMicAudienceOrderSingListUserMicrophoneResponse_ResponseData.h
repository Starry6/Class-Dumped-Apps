@interface IESLiveLinkMicAudienceOrderSingListUserMicrophoneResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray userMicrophoneListArray;
@property (nonatomic) Q userMicrophoneListArray_Count;
@property (nonatomic) q giftId;
@property (nonatomic) BOOL autoEnlarge;
@property (nonatomic) NSString currentSingItem;
@property (nonatomic) GPBInt64Array giftIdsArray;
@property (nonatomic) Q giftIdsArray_Count;
+ (id)descriptor;
@end
