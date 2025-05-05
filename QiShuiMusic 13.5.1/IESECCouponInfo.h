@interface IESECCouponInfo : GPBMessage
@property (nonatomic) q metaId;
@property (nonatomic) q serverTime;
@property (nonatomic) q countdown;
@property (nonatomic) NSString activityJsonStr;
@property (nonatomic) NSInteger couponType;
@property (nonatomic) IESECCouponActivityInfoMessage activityInfo;
@property (nonatomic) BOOL hasActivityInfo;
@property (nonatomic) IESECCouponMetaInfoMessage couponMeta;
@property (nonatomic) BOOL hasCouponMeta;
@property (nonatomic) NSString metaIdStr;
+ (id)descriptor;
@end
