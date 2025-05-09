@interface AWEIMShareVSLiveMessage : AWEIMMessage
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString roomOwnerID;
@property (nonatomic) NSString roomOwnerSecID;
@property (nonatomic) IESIMSaaSAWEIMUser roomOwner;
@property (nonatomic) IESIMURLModel roomCoverURL;
@property (nonatomic) NSString roomDescription;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSString roomOwnerName;
@property (nonatomic) IESIMURLModel roomOwnerAvatar;
@property (nonatomic) IESIMAwemeModel model;
@property (nonatomic) BOOL didUploadTrackLog;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) UIImage defaultCoverImage;
@property (nonatomic) UIImage defaultAvatarImage;
@property (nonatomic) NSNumber roomStageType;
@property (nonatomic) NSNumber roomVideoType;
@property (nonatomic) NSNumber roomRecordType;
@property (nonatomic) NSNumber roomRecordSubtype;
@property (nonatomic) NSString episodeGroupID;
@property (nonatomic) NSNumber episodeSeasonID;
@property (nonatomic) NSString roomEpisodePeriod;
@property (nonatomic) NSNumber roomEpisodeID;
@property (nonatomic) NSString roomTitle;
- (id)roomDescription;
- (id)episodeSeasonID;
- (BOOL)hasShow;
- (id)roomOwnerAvatar;
- (void)setRoomOwnerID:;
- (id)defaultAvatarImage;
- (id)defaultCoverImage;
- (BOOL)didUploadTrackLog;
- (id)episodeGroupID;
- (id)getContentDict;
- (id)getSyncedExtDict;
- (id)initWithContentDict:;
- (id)pushDetail;
- (id)roomCoverURL;
- (id)roomEpisodeID;
- (id)roomEpisodePeriod;
- (id)roomOwnerID;
- (id)roomOwnerName;
- (id)roomOwnerSecID;
- (id)roomRecordSubtype;
- (id)roomRecordType;
- (id)roomStageType;
- (id)roomTitle;
- (id)roomVideoType;
- (void)setDefaultAvatarImage:;
- (void)setDefaultCoverImage:;
- (void)setDidUploadTrackLog:;
- (void)setEpisodeGroupID:;
- (void)setEpisodeSeasonID:;
- (void)setHasShow:;
- (void)setPushDetail:;
- (void)setRoomCoverURL:;
- (void)setRoomDescription:;
- (void)setRoomEpisodeID:;
- (void)setRoomEpisodePeriod:;
- (void)setRoomOwnerAvatar:;
- (void)setRoomOwnerName:;
- (void)setRoomOwnerSecID:;
- (void)setRoomRecordSubtype:;
- (void)setRoomRecordType:;
- (void)setRoomStageType:;
- (void)setRoomTitle:;
- (void)setRoomVideoType:;
- (id)videoTag;
- (id)videoTagColor;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)roomID;
- (void)setRoomID:;
- (id)roomOwner;
- (void)setRoomOwner:;
+ (long long)customMessageType;
+ (id)tackStringForEpisodeStage:;
+ (id)tackStringForEpisodeSubtype:;
+ (id)tackStringForEpisodeType:;
+ (id)trackStringPlayStatusWithStage:videoType:;
@end
