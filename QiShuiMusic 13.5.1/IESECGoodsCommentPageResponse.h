@interface IESECGoodsCommentPageResponse : IESECBaseApiModel
@property (nonatomic) NSArray statModelArray;
@property (nonatomic) NSArray tagModelArray;
@property (nonatomic) NSArray skuModelArray;
@property (nonatomic) NSArray extendTagArray;
@property (nonatomic) NSString productName;
@property (nonatomic) Q meaninglessCount;
@property (nonatomic) BOOL isAllCommentSectionSelected;
- (void)setIsAllCommentSectionSelected:;
- (id)extendTagArray;
- (BOOL)isAllCommentSectionSelected;
- (unsigned long long)meaninglessCount;
- (void)setExtendTagArray:;
- (void)setMeaninglessCount:;
- (void)setSkuModelArray:;
- (void)setStatModelArray:;
- (void)setTagModelArray:;
- (id)skuModelArray;
- (id)statModelArray;
- (id)tagModelArray;
- (void)setProductName:;
- (id)productName;
- (id)init;
- (void).cxx_destruct;
+ (id)extendTagArrayJSONTransformer;
+ (id)skuModelArrayJSONTransformer;
+ (id)statModelArrayJSONTransformer;
+ (id)tagModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
