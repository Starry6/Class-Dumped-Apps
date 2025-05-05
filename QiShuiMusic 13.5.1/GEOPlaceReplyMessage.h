@interface GEOPlaceReplyMessage : GEOXPCReply
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) GEOPDPlaceResponse response;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRequestUUID:;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (id)requestUUID;
- (id)response;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setResponse:;
@end
