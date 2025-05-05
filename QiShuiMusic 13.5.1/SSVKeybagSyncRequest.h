@interface SSVKeybagSyncRequest : SSRequest
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)accountIdentifier;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:;
@end
