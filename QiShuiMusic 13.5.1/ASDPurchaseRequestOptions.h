@interface ASDPurchaseRequestOptions : ASDRequestOptions
@property (nonatomic) NSArray purchases;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)purchases;
- (id)initWithPurchases:;
+ (BOOL)supportsSecureCoding;
@end
