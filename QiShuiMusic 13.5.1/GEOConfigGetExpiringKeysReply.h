@interface GEOConfigGetExpiringKeysReply : GEOXPCReply
@property (nonatomic) NSDictionary expiringKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expiringKeys;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setExpiringKeys:;
@end
