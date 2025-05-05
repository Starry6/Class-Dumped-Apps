@interface AnnouncementAnchorGetResponse_SubscribeInfo : IESLivePBBaseMessage
@property (nonatomic) q subscribeCount;
@property (nonatomic) NSMutableArray subscribeUserAvatarArray;
@property (nonatomic) Q subscribeUserAvatarArray_Count;
+ (id)descriptor;
@end
