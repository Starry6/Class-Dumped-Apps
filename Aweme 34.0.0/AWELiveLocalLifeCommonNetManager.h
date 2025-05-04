@interface AWELiveLocalLifeCommonNetManager : NSObject
+ (void)pickUpCouponWithRoomId:drawTicketParams:completion:;
+ (void)pickUpCouponWithCouponId:roomId:anchorId:lanchId:lanchIdV2:lanchType:benefitId:benefitType:xidempotentId:assignRecordId:couponType:completion:;
@end
