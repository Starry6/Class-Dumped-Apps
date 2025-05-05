@interface BDXBridgeUploadImageParam : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSData fileData;
@property (nonatomic) NSArray formDataBody;
- (id)formDataBody;
- (void)setFormDataBody:;
- (id)urlString;
- (id)fileName;
- (void)setHeaders:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setFileName:;
- (void)setUrlString:;
- (void)setMimeType:;
- (id)headers;
- (id)params;
- (id)fileData;
- (void)setFileData:;
- (void)setParams:;
@end
