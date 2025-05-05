@interface IESLiveLinkMicAudienceGetOrderedSongListResponse_ResponseData_ListInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveKtvSongStruct music;
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) BOOL isSelfSeeing;
@property (nonatomic) HTSLiveMultiChorusSongItem multiChorusSongItem;
@property (nonatomic) BOOL hasMultiChorusSongItem;
+ (id)descriptor;
@end
