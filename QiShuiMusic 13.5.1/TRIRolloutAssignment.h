@interface TRIRolloutAssignment : TRIPBMessage
@property (nonatomic) NSMutableArray predicateArray;
@property (nonatomic) Q predicateArray_Count;
@property (nonatomic) NSMutableArray factorPackIdArray;
@property (nonatomic) Q factorPackIdArray_Count;
@property (nonatomic) NSString factorPackSetId;
@property (nonatomic) BOOL hasFactorPackSetId;
+ (id)descriptor;
@end
