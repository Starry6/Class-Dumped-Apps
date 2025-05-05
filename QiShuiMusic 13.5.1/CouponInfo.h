@interface CouponInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL applied;
@property (nonatomic) NSString reqId;
@property (nonatomic) NSString token;
@property (nonatomic) q bizTag;
@property (nonatomic) q adId;
@property (nonatomic) NSString cid;
@property (nonatomic) q type;
@property (nonatomic) q threshold;
@property (nonatomic) q amount;
@property (nonatomic) NSString applyHost;
@property (nonatomic) NSString applyApi;
@property (nonatomic) NSInteger applyAuthType;
@property (nonatomic) GPBInt64ObjectDictionary incrCoupons;
@property (nonatomic) Q incrCoupons_Count;
+ (id)descriptor;
@end
