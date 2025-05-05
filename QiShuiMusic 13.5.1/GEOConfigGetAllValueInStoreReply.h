@interface GEOConfigGetAllValueInStoreReply : GEOXPCReply
@property (nonatomic) NSDictionary keyStringsAndValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)keyStringsAndValues;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setKeyStringsAndValues:;
@end
