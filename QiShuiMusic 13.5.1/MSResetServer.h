@interface MSResetServer : NSObject
@property (nonatomic) NSString personID;
@property (nonatomic) MSMediaStreamDaemon daemon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDaemon:;
- (id)daemon;
- (id)personID;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
- (void)resetServerProtocol:didFinishWithError:;
- (void)resetServerProtocol:didReceiveAuthenticationError:;
- (void)resetServer;
+ (id)resetServerObjectWithPersonID:baseURL:;
@end
