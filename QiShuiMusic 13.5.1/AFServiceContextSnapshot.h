@interface AFServiceContextSnapshot : NSObject
@property (nonatomic) NSDate deliveryDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)deliveryDate;
- (BOOL)isEqual:;
- (id)initWithDeliveryDate:;
+ (BOOL)supportsSecureCoding;
@end
