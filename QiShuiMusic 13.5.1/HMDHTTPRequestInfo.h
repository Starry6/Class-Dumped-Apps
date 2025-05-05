@interface HMDHTTPRequestInfo : NSObject
@property (nonatomic) NSString requestID;
@property (nonatomic) double startTime;
@property (nonatomic) Q hasTriedTimes;
@property (nonatomic) NSString requestScene;
@property (nonatomic) NSString webviewURL;
@property (nonatomic) NSString webviewChannel;
- (unsigned long long)hasTriedTimes;
- (void)setHasTriedTimes:;
- (void)setRequestScene:;
- (void)setWebviewChannel:;
- (void)setWebviewURL:;
- (id)webviewChannel;
- (id)webviewURL;
- (id)init;
- (void)setStartTime:;
- (double)startTime;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
- (id)requestScene;
+ (id)nextRequestID;
@end
