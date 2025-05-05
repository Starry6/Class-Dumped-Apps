@interface GEOPlaceCalculateFreeableSpaceReply : GEOXPCReply
@property (nonatomic) Q freeableBytes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeToXPCDictionary:;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (unsigned long long)freeableBytes;
- (void)setFreeableBytes:;
@end
