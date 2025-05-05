@interface AVAssetCustomURLRequest : NSObject
@property (nonatomic) Q requestID;
@property (nonatomic) NSURLSessionTaskMetrics metrics;
- (id)init;
- (void)dealloc;
- (void)setMetrics:;
- (id)metrics;
- (unsigned long long)requestID;
- (id)initWithRequest:id:;
- (id)customURLRequest;
- (void)setCustomURLRequest:;
- (id)customURLResponse;
- (void)setCustomURLResponse:;
+ (id)requestWithRequest:id:;
@end
