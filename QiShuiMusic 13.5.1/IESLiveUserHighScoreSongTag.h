@interface IESLiveUserHighScoreSongTag : IESLivePBBaseMessage
@property (nonatomic) NSString highScoreSongCount;
@property (nonatomic) NSString icon;
@property (nonatomic) NSMutableArray bgColorArray;
@property (nonatomic) Q bgColorArray_Count;
+ (id)descriptor;
@end
