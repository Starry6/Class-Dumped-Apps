@interface AWEIMRefetchResourcesURLHelperContext : NSObject
@property (nonatomic) NSString requestUrl;
@property (nonatomic) NSString format;
@property (nonatomic) NSString templateString;
@property (nonatomic) NSDictionary additionalParam;
- (id)additionalParam;
- (void)setAdditionalParam:;
- (void)setTemplateString:;
- (void)setFormat:;
- (id)format;
- (id)requestUrl;
- (id)templateString;
- (void).cxx_destruct;
- (void)setRequestUrl:;
@end
