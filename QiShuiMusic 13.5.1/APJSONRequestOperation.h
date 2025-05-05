@interface APJSONRequestOperation : APHTTPRequestOperation
@property (nonatomic) @ responseJSON;
@property (nonatomic) NSError JSONError;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) Q JSONReadingOptions;
- (unsigned long long)JSONReadingOptions;
- (id)JSONError;
- (void)setCompletionBlockWithSuccess:failure:;
- (void)setJSONError:;
- (void)setJSONReadingOptions:;
- (void)setResponseJSON:;
- (id)error;
- (void).cxx_destruct;
- (id)responseJSON;
+ (id)JSONRequestOperationWithRequest:success:failure:;
+ (id)acceptableContentTypes;
+ (BOOL)canProcessRequest:;
@end
