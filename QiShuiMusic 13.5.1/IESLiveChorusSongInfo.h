@interface IESLiveChorusSongInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveKtvSongStruct music;
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) BOOL isSelfSeeing;
+ (id)descriptor;
@end
