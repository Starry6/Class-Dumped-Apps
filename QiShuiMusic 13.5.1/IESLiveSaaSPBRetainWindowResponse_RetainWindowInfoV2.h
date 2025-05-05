@interface IESLiveSaaSPBRetainWindowResponse_RetainWindowInfoV2 : GPBMessage
@property (nonatomic) NSString title;
@property (nonatomic) IESLiveSaaSPBRetainWindowResponse_CouponData couponData;
@property (nonatomic) BOOL hasCouponData;
@property (nonatomic) NSMutableArray productInfosArray;
@property (nonatomic) Q productInfosArray_Count;
@property (nonatomic) NSString expireSuffixText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString cancelText;
@property (nonatomic) q minWatchTime;
@property (nonatomic) NSString schema;
@property (nonatomic) q countdownTime;
@property (nonatomic) NSString kolUserTag;
+ (id)descriptor;
@end
