@interface GEOMAResourcePurgeCacheToSizeReply : GEOXPCReply
@property (nonatomic) Q amountDeleted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (unsigned long long)amountDeleted;
- (void)setAmountDeleted:;
@end
