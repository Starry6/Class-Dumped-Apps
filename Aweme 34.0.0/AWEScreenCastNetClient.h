@interface AWEScreenCastNetClient : NSObject
@property (nonatomic) NSMutableDictionary httpTasks;
@property (nonatomic) NSString urlString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configTaskWithURL:params:headers:completion:;
- (void)invalidAndCancel;
- (void)configTaskWithURL:completion:;
- (id)httpTasks;
- (void)setHttpTasks:;
- (id)taskWithUrl:;
- (id)urlString;
- (void)setUrlString:;
- (void)resume;
- (void)cancel;
- (void).cxx_destruct;
@end
