@interface GEOResourceFetchReply : GEOXPCReply
@property (nonatomic) NSArray names;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNames:;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (id)names;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
