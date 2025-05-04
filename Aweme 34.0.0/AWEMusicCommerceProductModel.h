@interface AWEMusicCommerceProductModel : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString outOrderNo;
@property (nonatomic) NSString tradeNo;
@property (nonatomic) q resultType;
- (void)setTradeNo:;
- (id)tradeNo;
- (id)outOrderNo;
- (id)initWithProductID:outOrderNo:tradeNo:resultType:;
- (void)setOutOrderNo:;
- (void)setProductID:;
- (id)productID;
- (void)setResultType:;
- (long long)resultType;
- (void).cxx_destruct;
@end
