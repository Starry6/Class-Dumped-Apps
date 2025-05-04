@interface AWEBSTSearchProductModel : AWETrackingServiceBSTBaseModel
@property (nonatomic) NSString productId;
@property (nonatomic) NSNumber isAd;
@property (nonatomic) NSNumber originReport;
@property (nonatomic) NSString bstGroupType;
@property (nonatomic) NSDictionary searchParams;
- (id)isAd;
- (void)setIsAd:;
- (id)searchParams;
- (void)setSearchParams:;
- (id)originReport;
- (void)setOriginReport:;
- (id)bstGroupType;
- (void)setBstGroupType:;
- (id)init;
- (id)productId;
- (void).cxx_destruct;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
