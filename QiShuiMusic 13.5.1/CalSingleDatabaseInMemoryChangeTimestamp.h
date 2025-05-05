@interface CalSingleDatabaseInMemoryChangeTimestamp : NSObject
@property (nonatomic) Q others;
@property (nonatomic) Q myself;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)others;
- (id)initWithDawnOfTime;
- (id)copyWithZone:;
- (unsigned long long)myself;
- (id)initWithTimestampForMyself:others:;
+ (BOOL)supportsSecureCoding;
@end
