@interface Redpack : IESLivePBBaseMessage
@property (nonatomic) q redpackType;
@property (nonatomic) q redpackActivityId;
@property (nonatomic) NSString redpackActivityDisplayText;
@property (nonatomic) q startApplyTime;
@property (nonatomic) q endApplyTime;
@property (nonatomic) q preheatTime;
@property (nonatomic) q serverTime;
@property (nonatomic) q hasApplied;
@property (nonatomic) NSString iconURL;
+ (id)descriptor;
@end
