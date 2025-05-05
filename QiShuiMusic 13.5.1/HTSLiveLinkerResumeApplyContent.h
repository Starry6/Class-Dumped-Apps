@interface HTSLiveLinkerResumeApplyContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkerResumeApplyContent_ApplyParam param;
@property (nonatomic) BOOL hasParam;
@property (nonatomic) NSString applyUser;
@property (nonatomic) q roomId;
+ (id)descriptor;
@end
