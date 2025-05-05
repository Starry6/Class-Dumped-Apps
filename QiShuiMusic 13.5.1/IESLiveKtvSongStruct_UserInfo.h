@interface IESLiveKtvSongStruct_UserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSString nickname;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) NSString idStr;
@property (nonatomic) NSString highScoreSongCount;
@property (nonatomic) NSString ktvStageMicPosTagText;
@property (nonatomic) NSInteger ktvLyricText;
@property (nonatomic) NSString ktvComponentLyricTextFirstLine;
@property (nonatomic) NSInteger ktvComponentLyricTextSecondLine;
@property (nonatomic) IESLiveUserHighScoreSongTag highScoreSongTag;
@property (nonatomic) BOOL hasHighScoreSongTag;
@property (nonatomic) q hitMidiRecordAb;
@property (nonatomic) double userMidiScore;
@property (nonatomic) BOOL isHighScoreSong;
@property (nonatomic) q kSongUid;
+ (id)descriptor;
@end
