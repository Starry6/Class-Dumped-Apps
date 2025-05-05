@interface HTSLiveLinkerChangeMultiPKTeamInfoContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveMultiPKModeInfo multiPkModeInfo;
@property (nonatomic) BOOL hasMultiPkModeInfo;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
