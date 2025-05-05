@interface TRIDeploymentRule : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) NSMutableArray predicateArray;
@property (nonatomic) Q predicateArray_Count;
+ (id)descriptor;
@end
