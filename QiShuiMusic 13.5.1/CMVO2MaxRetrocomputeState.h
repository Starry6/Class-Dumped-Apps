@interface CMVO2MaxRetrocomputeState : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSNumber meanDelta;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (long long)status;
- (id)copyWithZone:;
- (id)initWithStatus:startDate:endDate:meanDelta:;
- (id)meanDelta;
+ (BOOL)supportsSecureCoding;
@end
