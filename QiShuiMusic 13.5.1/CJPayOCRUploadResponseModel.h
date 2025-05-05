@interface CJPayOCRUploadResponseModel : JSONModel
@property (nonatomic) q httpCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSString response;
- (void)setHeader:;
- (void)setHttpCode:;
- (id)response;
- (long long)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
