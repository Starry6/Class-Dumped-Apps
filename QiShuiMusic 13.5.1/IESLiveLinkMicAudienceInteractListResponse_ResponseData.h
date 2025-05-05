@interface IESLiveLinkMicAudienceInteractListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray interactItemsArray;
@property (nonatomic) Q interactItemsArray_Count;
@property (nonatomic) GPBInt64Array playingListArray;
@property (nonatomic) Q playingListArray_Count;
@property (nonatomic) GPBInt64ObjectDictionary exclusiveList;
@property (nonatomic) Q exclusiveList_Count;
+ (id)descriptor;
@end
