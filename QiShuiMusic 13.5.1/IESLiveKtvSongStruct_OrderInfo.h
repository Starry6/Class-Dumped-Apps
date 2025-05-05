@interface IESLiveKtvSongStruct_OrderInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveKtvSongStruct_UserInfo topUser;
@property (nonatomic) BOOL hasTopUser;
@property (nonatomic) q score;
@property (nonatomic) q orderCount;
@property (nonatomic) BOOL hasAdded;
+ (id)descriptor;
@end
