@interface IESLiveLinkMicAudienceUserSearchResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray usersArray;
@property (nonatomic) Q usersArray_Count;
@property (nonatomic) BOOL hasMore;
+ (id)descriptor;
@end
