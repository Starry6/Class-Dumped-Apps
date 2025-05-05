@interface GEOPlaceByPhoneNumberRequest : GEOXPCRequest
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) NSArray phoneNumbers;
@property (nonatomic) BOOL allowCellular;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)phoneNumbers;
- (void)setRequestUUID:;
- (id)initWithTraits:auditToken:throttleToken:;
- (void)encodeToXPCDictionary:;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:error:;
- (id)requestUUID;
- (void)setPhoneNumbers:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)allowCellular;
- (void)setAllowCellular:;
+ (Class)replyClass;
@end
