@interface IESECAuctionSuccess : GPBMessage
@property (nonatomic) NSString title;
@property (nonatomic) q productId;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString productPic;
@property (nonatomic) q price;
@property (nonatomic) q charge;
@property (nonatomic) q freight;
@property (nonatomic) q total;
@property (nonatomic) NSString buttonLabel;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString freightCollect;
@property (nonatomic) q leftPaymentTime;
@property (nonatomic) NSInteger bizId;
@property (nonatomic) NSString depositInfo;
+ (id)descriptor;
@end
