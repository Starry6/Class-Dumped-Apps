@interface PARReply : NSObject
@property (nonatomic) NSURLRequest httpRequest;
@property (nonatomic) NSURLResponse httpResponse;
@property (nonatomic) NSArray rawResponse;
@property (nonatomic) NSData data;
@property (nonatomic) PARTask task;
@property (nonatomic) double scale;
- (void)setScale:;
- (id)data;
- (id)task;
- (id)initWithCoder:;
- (id)rawResponse;
- (id)httpResponse;
- (void)setTask:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (void)setHttpResponse:;
- (double)scale;
- (void)setRawResponse:;
- (id)httpRequest;
- (void)setHttpRequest:;
+ (BOOL)supportsSecureCoding;
@end
