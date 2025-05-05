@interface IESLiveSaaSPBRetainWindowResponse_ProductInfo : GPBMessage
@property (nonatomic) q productId;
@property (nonatomic) NSString title;
@property (nonatomic) IESLiveSaaSPBImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) q originalPrice;
@property (nonatomic) q discountPrice;
+ (id)descriptor;
@end
