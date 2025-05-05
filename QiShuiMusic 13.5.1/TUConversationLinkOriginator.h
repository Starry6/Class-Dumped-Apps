@interface TUConversationLinkOriginator : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) TUHandle handle;
@property (nonatomic) q revision;
- (id)handle;
- (void)setHandle:;
- (id)identifier;
- (void)setRevision:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithIdentifier:revision:handle:;
- (void).cxx_destruct;
- (BOOL)isEqualToConversationLinkOriginator:;
- (id)description;
- (long long)revision;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
