@interface IESLiveLiveAnchorRankHonor : IESLivePBBaseMessage
@property (nonatomic) NSString honorTitle;
@property (nonatomic) HTSLiveImage iconURL;
@property (nonatomic) BOOL hasIconURL;
+ (id)descriptor;
@end
