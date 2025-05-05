@interface GEOPlaceFreeSpaceRequest : GEOXPCRequest
@property (nonatomic) Q freeBytes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (BOOL)isValid;
- (unsigned long long)freeBytes;
- (void)setFreeBytes:;
+ (Class)replyClass;
@end
