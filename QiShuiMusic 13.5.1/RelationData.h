@interface RelationData : IESLivePBBaseMessage
@property (nonatomic) NSInteger followStatus;
@property (nonatomic) NSInteger responseStatus;
+ (id)descriptor;
@end
