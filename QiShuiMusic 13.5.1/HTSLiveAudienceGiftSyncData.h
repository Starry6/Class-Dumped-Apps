@interface HTSLiveAudienceGiftSyncData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray audienceReceiverListArray;
@property (nonatomic) Q audienceReceiverListArray_Count;
@property (nonatomic) q syncType;
+ (id)descriptor;
@end
