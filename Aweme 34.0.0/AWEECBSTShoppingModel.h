@interface AWEECBSTShoppingModel : AWETrackingServiceBSTBaseModel
@property (nonatomic) NSString productId;
@property (nonatomic) NSString bstGroupType;
@property (nonatomic) NSNumber originReport;
@property (nonatomic) NSNumber isAd;
- (id)isAd;
- (void)setIsAd:;
- (id)originReport;
- (void)setOriginReport:;
- (id)bstGroupType;
- (void)setBstGroupType:;
- (id)productId;
- (void).cxx_destruct;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
