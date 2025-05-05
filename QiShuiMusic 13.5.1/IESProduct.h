@interface IESProduct : NSObject
@property (nonatomic) NSString iapID;
@property (nonatomic) NSNumber iesProductID;
@property (nonatomic) SKProduct skProduct;
- (id)iapID;
- (id)iesProductID;
- (id)initWithIapID:iesProductID:skProduct:;
- (void)setIapID:;
- (void)setIesProductID:;
- (void)setSkProduct:;
- (id)skProduct;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
