@interface GEOImageServiceRequestSimple : GEOXPCRequest
@property (nonatomic) GEOImageServiceRequest request;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (id)identifier;
- (void)encodeToXPCDictionary:;
- (id)request;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setRequest:;
- (void)setIdentifier:;
+ (Class)replyClass;
@end
