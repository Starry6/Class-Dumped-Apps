@interface EKRecurrenceEnd : NSObject
@property (nonatomic) BOOL usesEndDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q occurrenceCount;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)usesEndDate;
- (id)initWithEndDate:;
- (id)initWithOccurrenceCount:;
- (unsigned long long)occurrenceCount;
+ (BOOL)supportsSecureCoding;
+ (id)recurrenceEndWithEndDate:;
+ (id)recurrenceEndWithOccurrenceCount:;
@end
