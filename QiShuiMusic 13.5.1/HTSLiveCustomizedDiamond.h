@interface HTSLiveCustomizedDiamond : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSInteger priceMin;
@property (nonatomic) NSInteger priceMax;
@property (nonatomic) float diamondCountRate;
@property (nonatomic) NSInteger givingCount;
@property (nonatomic) NSString describe;
@property (nonatomic) NSString couponId;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
+ (id)descriptor;
@end
