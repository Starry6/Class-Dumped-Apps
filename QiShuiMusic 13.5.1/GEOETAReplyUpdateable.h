@interface GEOETAReplyUpdateable : GEOXPCReply
@property (nonatomic) GEOETATrafficUpdateResponse response;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (id)response;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setResponse:;
@end
