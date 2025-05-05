@interface CATIDSMessageOptions : NSObject
@property (nonatomic) BOOL fireAndForget;
@property (nonatomic) NSNumber deliveryTimeout;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setFireAndForget:;
- (BOOL)shouldFireAndForget;
- (id)deliveryTimeout;
- (void)setDeliveryTimeout:;
+ (BOOL)supportsSecureCoding;
@end
