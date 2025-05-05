@interface ASDPurchaseResponse : ASDRequestResponse
@property (nonatomic) NSArray items;
- (id)init;
- (id)items;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithPurchaseResponseItems:;
+ (BOOL)supportsSecureCoding;
@end
