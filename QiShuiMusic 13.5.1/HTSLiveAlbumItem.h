@interface HTSLiveAlbumItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveEpisode episode;
@property (nonatomic) BOOL hasEpisode;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
@property (nonatomic) NSInteger itemType;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isHide;
+ (id)descriptor;
@end
