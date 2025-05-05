@interface CTActivationPolicyState : NSObject
@property (nonatomic) q carrierLock;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (long long)carrierLock;
- (void)setCarrierLock:;
+ (BOOL)supportsSecureCoding;
@end
