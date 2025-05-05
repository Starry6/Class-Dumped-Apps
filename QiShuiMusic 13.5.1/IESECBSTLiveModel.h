@interface IESECBSTLiveModel : IESECBSTBaseModel
@property (nonatomic) NSString productId;
@property (nonatomic) NSString bstGroupType;
@property (nonatomic) NSNumber originReport;
@property (nonatomic) NSNumber isAd;
- (id)bstGroupType;
- (id)originReport;
- (void)setBstGroupType:;
- (void)setIsAd:;
- (void)setOriginReport:;
- (id)init;
- (id)productId;
- (void).cxx_destruct;
- (id)isAd;
- (void)setProductId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
