@interface VMUVMRegionTracker : NSObject
@property (nonatomic) q regionCount;
- (id)initWithTask:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)regionCount;
- (id)initWithTask:stackLogReader:;
- (unsigned long long)_regionIndexForAddress:;
- (unsigned long long)handleStackLogType:address:size:stackID:;
- (void)convertStackIDs:;
- (id)vmRegionRangeInfoForRange:;
+ (BOOL)supportsSecureCoding;
@end
