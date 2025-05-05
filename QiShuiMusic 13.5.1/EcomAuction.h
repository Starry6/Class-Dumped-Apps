@interface EcomAuction : IESLivePBBaseMessage
@property (nonatomic) q price;
@property (nonatomic) NSString priceLabel;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) EcomBidder user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q status;
+ (id)descriptor;
@end
