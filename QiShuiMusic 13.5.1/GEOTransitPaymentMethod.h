@interface GEOTransitPaymentMethod : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q muid;
@property (nonatomic) NSInteger paymentMethodType;
@property (nonatomic) NSInteger addValueNameType;
- (id)identifier;
- (unsigned long long)muid;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)paymentMethodType;
- (id)initWithPaymentMethod:;
- (int)addValueNameType;
@end
