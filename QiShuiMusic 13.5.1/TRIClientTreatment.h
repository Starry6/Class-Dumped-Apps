@interface TRIClientTreatment : TRIPBMessage
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) NSMutableArray factorLevelArray;
@property (nonatomic) Q factorLevelArray_Count;
+ (id)descriptor;
@end
