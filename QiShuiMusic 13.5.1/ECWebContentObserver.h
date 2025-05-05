@interface ECWebContentObserver : NSObject
@property (nonatomic) EDWebContentParser parser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)parser;
- (void)setParser:;
- (void)baseURL:didRequestRemoteContentURLs:;
- (void)requestDataDetectionResultsWithBaseURL:;
- (void)receiveDataDetectionResults:;
- (void)logWebBundleMessage:;
- (id)initWithParser:;
@end
