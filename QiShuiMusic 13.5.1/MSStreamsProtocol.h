@interface MSStreamsProtocol : NSObject
@property (nonatomic) <MSStreamsProtocolDelegate> delegate;
@property (nonatomic) NSString personID;
@property (nonatomic) NSURL putURL;
@property (nonatomic) NSURL getURL;
@property (nonatomic) NSURL resetURL;
@property (nonatomic) NSURL reauthorizeURL;
@property (nonatomic) NSURL uploadCompleteURL;
@property (nonatomic) NSURL deleteURL;
- (void)abort;
- (void)setDelegate:;
- (id)personID;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
- (id)deleteURL;
- (id)getURL;
- (id)putURL;
- (id)resetURL;
- (id)reauthorizeURL;
- (id)uploadCompleteURL;
- (id)deviceInfoDict;
- (void)_didFindServerSideConfigurationVersion:;
- (void)_didReceiveRetryAfterDate:;
- (void)_refreshAuthTokenForContext:;
@end
