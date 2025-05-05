@interface AMSBagNetworkTaskResult : NSObject
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
@property (nonatomic) NSString storefront;
- (void)setStorefront:;
- (id)storefront;
- (BOOL)expired;
- (id)data;
- (void)setExpirationDate:;
- (id)expirationDate;
- (id)initWithData:;
- (void).cxx_destruct;
- (void)setData:;
@end
