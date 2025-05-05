@interface MSServerSideConfigProtocol : NSObject
@property (nonatomic) <MSServerSideConfigProtocolDelegate> delegate;
@property (nonatomic) NSString personID;
- (void)abort;
- (void)dealloc;
- (void)_didFinishWithResponse:error:;
- (void)setDelegate:;
- (id)personID;
- (void)_didFailAuthenticationWithError:;
- (void)queryConfiguration;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
@end
