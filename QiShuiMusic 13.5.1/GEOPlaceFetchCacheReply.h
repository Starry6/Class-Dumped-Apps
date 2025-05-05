@interface GEOPlaceFetchCacheReply : GEOXPCReply
@property (nonatomic) NSDictionary allCacheEntries;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)allCacheEntries;
- (void)setAllCacheEntries:;
@end
