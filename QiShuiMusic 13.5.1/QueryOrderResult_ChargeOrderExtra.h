@interface QueryOrderResult_ChargeOrderExtra : IESLivePBBaseMessage
@property (nonatomic) q ployId;
@property (nonatomic) NSString coupon;
@property (nonatomic) NSString couponDescription;
@property (nonatomic) NSMutableArray couponDetailArray;
@property (nonatomic) Q couponDetailArray_Count;
@property (nonatomic) q rebateAmount;
@property (nonatomic) NSString rebateMessage;
@property (nonatomic) q deductAmount;
+ (id)descriptor;
@end
