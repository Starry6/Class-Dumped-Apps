@interface MDMMAIDAuthenticator : NSObject
@property (nonatomic) NSString rmAccountID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rmAccountID;
- (void).cxx_destruct;
- (void)setRmAccountID:;
- (id)_appleIDContext;
- (BOOL)authenticateRequest:error:;
- (BOOL)prepareTask:error:;
- (id)initWithRMAccountID:;
@end
