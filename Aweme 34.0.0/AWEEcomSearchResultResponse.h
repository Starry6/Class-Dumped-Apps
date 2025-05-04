@interface AWEEcomSearchResultResponse : AWEBaseApiModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEEcomSearchResultPageData pageData;
@property (nonatomic) AWEEcomSearchResultBizData bizData;
@property (nonatomic) NSDictionary rawLogPassback;
- (void)setBizData:;
- (id)bizData;
- (id)rawLogPassback;
- (void)setRawLogPassback:;
- (void)fillMerchandiseResp:;
- (void).cxx_destruct;
- (id)pageData;
- (void)setPageData:;
+ (id)pageDataJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
