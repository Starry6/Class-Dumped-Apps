@interface HTSLivePayGradeResponse_Data : IESLivePBBaseMessage
@property (nonatomic) q score;
@property (nonatomic) q level;
@property (nonatomic) q thisGradeMinDiamond;
@property (nonatomic) q thisGradeMaxDiamond;
@property (nonatomic) NSString gradeDescribe;
@property (nonatomic) HTSLiveImage newImIconWithLevel;
@property (nonatomic) BOOL hasNewImIconWithLevel;
@property (nonatomic) HTSLiveImage newLiveIcon;
@property (nonatomic) BOOL hasNewLiveIcon;
@property (nonatomic) HTSLiveGradeBuffInfo buffInfo;
@property (nonatomic) BOOL hasBuffInfo;
@property (nonatomic) BOOL gradeDescribeShining;
@property (nonatomic) NSInteger describeType;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
