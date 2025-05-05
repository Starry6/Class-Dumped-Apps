@interface TTHttpMultipartFormDataChromium : TTHttpMultipartFormData
@property (nonatomic) NSMutableArray HTTPBodyParts;
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSString boundary;
@property (nonatomic) BOOL isFinal;
- (id)HTTPBodyParts;
- (void)appendPartWithFileData:name:fileName:mimeType:;
- (void)appendPartWithFormData:name:;
- (void)appendPartWithHeaders:body:;
- (id)finalFormDataWithHttpRequest:;
- (id)getContentType;
- (void)setHTTPBodyParts:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isFinal;
- (void)setIsFinal:;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)boundary;
- (void)setBoundary:;
@end
