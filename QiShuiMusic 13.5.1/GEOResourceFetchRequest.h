@interface GEOResourceFetchRequest : GEOXPCRequest
@property (nonatomic) NSArray resources;
@property (nonatomic) GEOResourceManifestConfiguration manifestConfiguration;
@property (nonatomic) BOOL force;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)force;
- (void)setForce:;
- (id)resources;
- (void)setResources:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setManifestConfiguration:;
- (id)manifestConfiguration;
+ (Class)replyClass;
@end
