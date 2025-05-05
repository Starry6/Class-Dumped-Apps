@interface IESLiveSaaSPBRivalsSearchResponse_AnchorInfo : GPBMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSString unionId;
@property (nonatomic) q roomId;
@property (nonatomic) IESLiveSaaSPBImage avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) NSString nickName;
@property (nonatomic) q shortId;
@property (nonatomic) q fansNum;
@property (nonatomic) NSString customVerify;
@property (nonatomic) q linkStatus;
@property (nonatomic) NSString displayId;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) IESLiveSaaSPBRoom room;
@property (nonatomic) BOOL hasRoom;
+ (id)descriptor;
@end
