@interface BU_AFStreamingMultipartFormData : NSObject
@property (nonatomic) NSMutableURLRequest request;
@property (nonatomic) Q stringEncoding;
@property (nonatomic) NSString boundary;
@property (nonatomic) BU_AFMultipartBodyStream bodyStream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendPartWithFormData:name:;
- (void)appendPartWithHeaders:body:;
- (id)initWithURLRequest:stringEncoding:;
- (id)requestByFinalizingMultipartFormData;
- (void)setBodyStream:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)bodyStream;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:;
- (id)boundary;
- (void)setBoundary:;
@end
