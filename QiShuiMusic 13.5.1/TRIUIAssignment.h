@interface TRIUIAssignment : TRIPBMessage
@property (nonatomic) NSInteger bucketingOneOfCase;
@property (nonatomic) I numBuckets;
@property (nonatomic) TRIUIAssignment_ExplicitBuckets explicitBuckets;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
+ (id)descriptor;
@end
