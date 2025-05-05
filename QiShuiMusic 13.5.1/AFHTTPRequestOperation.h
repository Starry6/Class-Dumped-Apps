@interface AFHTTPRequestOperation : AFURLConnectionOperation
@property (nonatomic) NSHTTPURLResponse response;
@property (nonatomic) @ responseObject;
@property (nonatomic) NSError responseSerializationError;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> responseSerializer;
- (id)responseSerializationError;
- (id)responseSerializer;
- (void)setCompletionBlockWithSuccess:failure:;
- (void)setResponseObject:;
- (void)setResponseSerializationError:;
- (void)setResponseSerializer:;
- (id)initWithRequest:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)pause;
- (id)copyWithZone:;
- (id)responseObject;
+ (BOOL)supportsSecureCoding;
@end
