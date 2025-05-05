@interface AnnouncementVideoListResponse_Video : IESLivePBBaseMessage
@property (nonatomic) q itemId;
@property (nonatomic) NSMutableArray coverUrlsArray;
@property (nonatomic) Q coverUrlsArray_Count;
@property (nonatomic) NSString itemIdStr;
+ (id)descriptor;
@end
