@interface AWEIMRefetchResourcesURLHelperContext : NSObject
@property (nonatomic) NSString requestUrl;
@property (nonatomic) NSString format;
@property (nonatomic) NSString templateString;
@property (nonatomic) NSDictionary additionalParam;
- (void)setTemplateString:;
- (id)additionalParam;
- (void)setAdditionalParam:;
- (id)format;
- (void)setFormat:;
- (void).cxx_destruct;
- (id)requestUrl;
- (id)templateString;
- (void)setRequestUrl:;
@end
