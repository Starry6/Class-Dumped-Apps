@interface AFStreamingMultipartFormData : NSObject
@property (nonatomic) NSMutableURLRequest request;
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSString boundary;
@property (nonatomic) AFMultipartBodyStream bodyStream;
- (void)appendPartWithFileData:name:fileName:mimeType:;
- (BOOL)appendPartWithFileURL:name:error:;
- (BOOL)appendPartWithFileURL:name:fileName:mimeType:error:;
- (void)appendPartWithFormData:name:;
- (void)appendPartWithHeaders:body:;
- (void)appendPartWithInputStream:name:fileName:length:mimeType:;
- (id)initWithURLRequest:stringEncoding:;
- (id)requestByFinalizingMultipartFormData;
- (void)setBodyStream:;
- (void)throttleBandwidthWithPacketSize:delay:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)bodyStream;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)boundary;
- (void)setBoundary:;
@end
