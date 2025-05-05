@interface InfoResult_InfoData : IESLivePBBaseMessage
@property (nonatomic) q money;
@property (nonatomic) q userId;
@property (nonatomic) q diamond;
@property (nonatomic) q percentWord;
@property (nonatomic) q goldCoins;
@property (nonatomic) NSString coupon;
@property (nonatomic) NSString couponDescription;
@property (nonatomic) NSMutableArray couponDetailArray;
@property (nonatomic) Q couponDetailArray_Count;
@property (nonatomic) q goldenBeans;
@property (nonatomic) q cashMoney;
@property (nonatomic) q remunerationMoney;
@property (nonatomic) q contingentMoney;
@property (nonatomic) BOOL hasLivePermission;
@property (nonatomic) q openId;
@property (nonatomic) NSString unionId;
+ (id)descriptor;
@end
