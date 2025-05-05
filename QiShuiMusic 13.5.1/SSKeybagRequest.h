@interface SSKeybagRequest : SSRequest
@property (nonatomic) NSNumber accountID;
@property (nonatomic) @ contentIdentifier;
@property (nonatomic) q keybagOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)contentIdentifier;
- (id)copyXPCEncoding;
- (id)accountID;
- (id)accountIdentifier;
- (void)startWithCompletionBlock:;
- (void)setContentIdentifier:;
- (id)initWithAccountIdentifier:;
- (long long)keybagOptions;
- (void)setKeybagOptions:;
@end
