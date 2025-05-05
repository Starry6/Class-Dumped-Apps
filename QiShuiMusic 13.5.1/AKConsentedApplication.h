@interface AKConsentedApplication : NSObject
@property (nonatomic) NSArray scopes;
@property (nonatomic) NSString clientID;
@property (nonatomic) q state;
@property (nonatomic) NSString transferState;
@property (nonatomic) NSString primaryClientID;
@property (nonatomic) NSString origin;
- (void)setOrigin:;
- (void)setState:;
- (id)scopes;
- (void)setClientID:;
- (id)initWithCoder:;
- (id)origin;
- (void)encodeWithCoder:;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)clientID;
- (void)setScopes:;
- (id)transferState;
- (void)setTransferState:;
- (id)initWithResponseInfo:;
- (id)primaryClientID;
- (void)setPrimaryClientID:;
+ (BOOL)supportsSecureCoding;
@end
