@interface TRIPersistedAllocationStatusCursor : TRIPBMessage
@property (nonatomic) TRIPBTimestamp lowerBoundExclusive;
@property (nonatomic) BOOL hasLowerBoundExclusive;
+ (id)descriptor;
@end
