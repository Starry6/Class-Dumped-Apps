@interface IESLiveKtvSongStruct_PersonalSongInfo : IESLivePBBaseMessage
@property (nonatomic) double userMidiScore;
@property (nonatomic) BOOL isHighScoreSong;
+ (id)descriptor;
@end
