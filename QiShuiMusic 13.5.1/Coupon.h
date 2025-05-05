@interface Coupon : IESLivePBBaseMessage
@property (nonatomic) NSString icon;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString expireTime;
@property (nonatomic) NSString couponName;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString couponString;
@property (nonatomic) q countdown;
@property (nonatomic) q showType;
@property (nonatomic) NSString couponMetaId;
@property (nonatomic) NSString couponType;
+ (id)descriptor;
@end
