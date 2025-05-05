@interface IESLiveWindowHeaderInfo : IESLivePBBaseMessage
@property (nonatomic) NSString windowName;
@property (nonatomic) IESLiveAuthorReputation reputation;
@property (nonatomic) BOOL hasReputation;
@property (nonatomic) NSString windowURL;
@property (nonatomic) IESLiveText jumpGuideInfo;
@property (nonatomic) BOOL hasJumpGuideInfo;
+ (id)descriptor;
@end
