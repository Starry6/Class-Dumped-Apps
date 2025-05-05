@interface HTSLiveRiskAdviseSyncData : IESLivePBBaseMessage
@property (nonatomic) q createTime;
@property (nonatomic) HTSLiveText adviseText;
@property (nonatomic) BOOL hasAdviseText;
+ (id)descriptor;
@end
