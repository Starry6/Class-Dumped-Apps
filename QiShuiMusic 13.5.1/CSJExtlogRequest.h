@interface CSJExtlogRequest : CSJAdNetworkRequest
@property (nonatomic) NSString applogBaseUrl;
@property (nonatomic) BOOL isV3Data;
@property (nonatomic) BOOL isCypher4;
- (id)applogBaseUrl;
- (id)generatedHeaderField;
- (BOOL)isCypher4;
- (BOOL)isV3Data;
- (id)requestHeaderFieldValueDictionary;
- (void)setApplogBaseUrl:;
- (void)setIsCypher4:;
- (void)setIsV3Data:;
- (id)baseUrl;
- (void).cxx_destruct;
@end
