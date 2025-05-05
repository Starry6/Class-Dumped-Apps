@interface TRIUIAssignment_ExplicitBuckets : TRIPBMessage
@property (nonatomic) TRIPBUInt32Array bucketArray;
@property (nonatomic) Q bucketArray_Count;
+ (id)descriptor;
@end
