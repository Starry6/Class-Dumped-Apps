@interface BDXBridgeUploadFileParam : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSArray formDataBody;
@property (nonatomic) BOOL needCommonParams;
- (id)formDataBody;
- (BOOL)needCommonParams;
- (void)setFormDataBody:;
- (void)setNeedCommonParams:;
- (id)urlString;
- (void)setHeaders:;
- (void).cxx_destruct;
- (void)setUrlString:;
- (id)headers;
- (id)params;
- (void)setParams:;
@end
