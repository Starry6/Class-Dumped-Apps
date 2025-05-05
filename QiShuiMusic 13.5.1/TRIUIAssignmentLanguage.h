@interface TRIUIAssignmentLanguage : TRIPBMessage
@property (nonatomic) NSMutableArray predicateArray;
@property (nonatomic) Q predicateArray_Count;
@property (nonatomic) NSMutableArray assignmentArray;
@property (nonatomic) Q assignmentArray_Count;
@property (nonatomic) BOOL preservePopulationDistribution;
@property (nonatomic) BOOL hasPreservePopulationDistribution;
+ (id)descriptor;
@end
