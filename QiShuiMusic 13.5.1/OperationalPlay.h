@interface OperationalPlay : IESLivePBBaseMessage
@property (nonatomic) NSInteger operationalPlayType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) MultipleMatches3 multipleMatches3;
+ (id)descriptor;
@end
