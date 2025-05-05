@interface GEOPlaceCachePlaceReply : GEOXPCReply
@property (nonatomic) NSArray identifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifiers;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void)setIdentifiers:;
- (void).cxx_destruct;
@end
