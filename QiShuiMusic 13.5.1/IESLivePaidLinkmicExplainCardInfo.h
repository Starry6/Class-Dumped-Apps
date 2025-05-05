@interface IESLivePaidLinkmicExplainCardInfo : IESLivePBBaseMessage
@property (nonatomic) q numOfLink;
@property (nonatomic) float avgGrade;
@property (nonatomic) IESLivePaidLinkmicTag tag;
@property (nonatomic) BOOL hasTag;
+ (id)descriptor;
@end
