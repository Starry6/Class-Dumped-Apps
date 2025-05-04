@interface AWECodeGenMarketingExposureInfoModel : AWEBaseDataModel
@property (nonatomic) NSInteger styleType;
@property (nonatomic) NSString text;
@property (nonatomic) q productId;
@property (nonatomic) NSString productIdStr;
- (void)setStyleType:;
- (long long)productId;
- (void)setText:;
- (id)text;
- (int)styleType;
- (void).cxx_destruct;
- (void)setProductId:;
- (id)productIdStr;
- (void)setProductIdStr:;
+ (id)JSONKeyPathsByPropertyKey;
@end
