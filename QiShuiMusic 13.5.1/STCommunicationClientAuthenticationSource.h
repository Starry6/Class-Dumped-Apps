@interface STCommunicationClientAuthenticationSource : NSObject
@property (nonatomic) <STAuthenticationSession> authenticationSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithAuthenticationSession:;
- (id)authenticationSession;
- (void)setAuthenticationSession:;
- (void)authenticateWithIdentifier:forced:completionHandler:;
@end
