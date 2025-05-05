@interface SSVMediaContentTasteUpdateResponse : NSObject
@property (nonatomic) NSArray contentTasteItems;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) Q responseRevisionID;
@property (nonatomic) BOOL cachedResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setExpirationDate:;
- (id)initWithCoder:;
- (void)setCachedResponse:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isCachedResponse;
- (id)description;
- (id)contentTasteItems;
- (void)setContentTasteItems:;
- (unsigned long long)responseRevisionID;
- (void)setResponseRevisionID:;
+ (BOOL)supportsSecureCoding;
@end
