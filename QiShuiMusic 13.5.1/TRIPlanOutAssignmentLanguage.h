@interface TRIPlanOutAssignmentLanguage : TRIPBMessage
@property (nonatomic) NSString yaml;
@property (nonatomic) BOOL hasYaml;
@property (nonatomic) NSMutableArray treatmentIdArray;
@property (nonatomic) Q treatmentIdArray_Count;
+ (id)descriptor;
@end
