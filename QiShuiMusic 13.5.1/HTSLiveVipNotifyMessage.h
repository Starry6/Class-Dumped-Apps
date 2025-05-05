@interface HTSLiveVipNotifyMessage : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) q activityId;
@property (nonatomic) NSString activityName;
+ (id)descriptor;
@end
