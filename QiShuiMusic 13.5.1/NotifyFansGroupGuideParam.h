@interface NotifyFansGroupGuideParam : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) q roomId;
@property (nonatomic) q anchorId;
+ (id)descriptor;
@end
