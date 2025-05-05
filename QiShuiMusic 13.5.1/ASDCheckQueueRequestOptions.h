@interface ASDCheckQueueRequestOptions : ASDRequestOptions
@property (nonatomic) Q reason;
- (id)initWithReason:;
- (unsigned long long)reason;
- (id)initWithCoder:;
- (void)setReason:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
