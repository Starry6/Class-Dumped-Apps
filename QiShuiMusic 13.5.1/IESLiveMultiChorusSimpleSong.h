@interface IESLiveMultiChorusSimpleSong : IESLivePBBaseMessage
@property (nonatomic) q songId;
@property (nonatomic) NSString songName;
@property (nonatomic) NSString songIdStr;
+ (id)descriptor;
@end
