@interface AMSHTTPArchiveTaskInfo : NSObject
@property (nonatomic) NSURLSessionTaskMetrics metrics;
@property (nonatomic) NSData HTTPBody;
@property (nonatomic) NSData responseData;
- (id)metrics;
- (id)initWithURLTaskInfo:;
- (id)HTTPBody;
- (id)responseData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
