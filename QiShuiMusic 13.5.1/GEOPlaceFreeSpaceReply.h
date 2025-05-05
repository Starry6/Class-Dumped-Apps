@interface GEOPlaceFreeSpaceReply : GEOXPCReply
@property (nonatomic) Q freedBytes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (unsigned long long)freedBytes;
- (void)setFreedBytes:;
@end
