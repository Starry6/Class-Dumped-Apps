@interface SDHTTPClient : NSObject
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) NSURLSession urlSession;
@property (nonatomic) NSURL baseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)urlSession;
- (id)init;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (id)log;
- (id)baseURL;
- (void)setLog:;
- (void).cxx_destruct;
- (id)overrideServerURL;
+ (id)sharedInstance;
@end
