@interface IESLiveInnerPbLiveEcomMessage : GPBMessage
@property (nonatomic) q metaId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSString nickName;
@property (nonatomic) q purchaseCnt;
@property (nonatomic) NSString text;
@property (nonatomic) NSString icon;
@property (nonatomic) q metaId;
@property (nonatomic) q serverTime;
@property (nonatomic) q countdown;
@property (nonatomic) NSString activityJsonStr;
@property (nonatomic) NSInteger couponType;
@property (nonatomic) IESLiveInnerPbCouponMetaInfoMessage couponMeta;
@property (nonatomic) BOOL hasCouponMeta;
@property (nonatomic) NSString metaIdStr;
- (id)activityJson;
- (id)couponMetaJson;
- (BOOL)isCouponEnd;
- (BOOL)isCouponStart;
- (BOOL)isCouponZeroAmount;
+ (id)descriptor;
@end
