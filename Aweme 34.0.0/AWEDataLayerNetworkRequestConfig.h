@interface AWEDataLayerNetworkRequestConfig : NSObject
@property (nonatomic) q frequencyControl;
@property (nonatomic) q maxRetryTimes;
@property (nonatomic) NSString businessURI;
@property (nonatomic) NSString requestID;
@property (nonatomic) q timeout;
@property (nonatomic) q retryTimes;
- (id)businessURI;
- (long long)retryTimes;
- (void)setRetryTimes:;
- (void)setMaxRetryTimes:;
- (long long)maxRetryTimes;
- (long long)frequencyControl;
- (void)setFrequencyControl:;
- (void)setBusinessURI:;
- (id)requestID;
- (void)setRequestID:;
- (long long)timeout;
- (void)setTimeout:;
- (void).cxx_destruct;
@end
