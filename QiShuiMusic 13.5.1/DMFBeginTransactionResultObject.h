@interface DMFBeginTransactionResultObject : CATTaskResultObject
@property (nonatomic) NSUUID UUID;
- (id)initWithUUID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)UUID;
+ (BOOL)supportsSecureCoding;
@end
