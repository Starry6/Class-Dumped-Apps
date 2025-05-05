@interface PACoalescedAccessRecord : PACompleteAccessRecord
@property (nonatomic) Q count;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqualToAccessRecord:;
- (id)initWithAccess:startTime:endTime:count:;
+ (BOOL)supportsSecureCoding;
@end
