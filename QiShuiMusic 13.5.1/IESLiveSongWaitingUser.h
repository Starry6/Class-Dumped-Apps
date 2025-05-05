@interface IESLiveSongWaitingUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray orderedSongNamesArray;
@property (nonatomic) Q orderedSongNamesArray_Count;
@property (nonatomic) NSString applyTimeText;
@property (nonatomic) IESLiveUserHighScoreSongTag highScoreSongTag;
@property (nonatomic) BOOL hasHighScoreSongTag;
@property (nonatomic) IESLiveUserMultiChorusSongInfo multiChorusSongInfo;
@property (nonatomic) BOOL hasMultiChorusSongInfo;
+ (id)descriptor;
@end
