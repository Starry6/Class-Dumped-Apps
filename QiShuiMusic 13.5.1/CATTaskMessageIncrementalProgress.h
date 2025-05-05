@interface CATTaskMessageIncrementalProgress : CATTaskMessage
@property (nonatomic) q completedUnitCount;
@property (nonatomic) q totalUnitCount;
- (id)initWithTaskUUID:completedUnitCount:totalUnitCount:;
- (void)setCompletedUnitCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTotalUnitCount:;
- (long long)totalUnitCount;
- (long long)completedUnitCount;
+ (BOOL)supportsSecureCoding;
@end
