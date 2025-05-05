@interface GEOMAResourceFetchReply : GEOXPCReply
@property (nonatomic) NSURL url;
@property (nonatomic) NSData sandBoxToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (void)encodeToXPCDictionary:;
- (void)setUrl:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setSandBoxToken:;
- (id)sandBoxToken;
@end
