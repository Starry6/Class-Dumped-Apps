@interface IESLiveHighScoreSongInfo : IESLivePBBaseMessage
@property (nonatomic) NSString songListSchema;
@property (nonatomic) NSString countStr;
@property (nonatomic) NSString countSubstr;
+ (id)descriptor;
@end
