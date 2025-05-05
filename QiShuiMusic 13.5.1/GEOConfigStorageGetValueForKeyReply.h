@interface GEOConfigStorageGetValueForKeyReply : GEOXPCReply
@property (nonatomic) @ keyValue;
@property (nonatomic) q keySource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (void)setKeyValue:;
- (id)initWithXPCDictionary:error:;
- (id)keyValue;
- (void)setKeySource:;
- (long long)keySource;
- (BOOL)isValid;
- (void).cxx_destruct;
@end
