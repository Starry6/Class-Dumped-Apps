@interface IESECGoodsOpenURL : NSObject
@property (nonatomic) q promotionSource;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) NSString AppURL;
@property (nonatomic) NSString universalLinks;
@property (nonatomic) NSString webURL;
- (id)AppURL;
- (long long)promotionSource;
- (id)initWithLinks:promotionSource:;
- (id)ironManURL;
- (void)setIronManURL:;
- (void)setPromotionSource:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (void)setAppURL:;
- (id)universalLinks;
- (void)setUniversalLinks:;
@end
