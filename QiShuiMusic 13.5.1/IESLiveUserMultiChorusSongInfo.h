@interface IESLiveUserMultiChorusSongInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray songsArray;
@property (nonatomic) Q songsArray_Count;
@property (nonatomic) q totalCount;
+ (id)descriptor;
@end
