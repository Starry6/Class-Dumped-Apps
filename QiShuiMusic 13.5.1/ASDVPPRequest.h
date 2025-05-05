@interface ASDVPPRequest : NSObject
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) q archiveType;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSNumber externalVersionIdentifier;
@property (nonatomic) NSNumber itemIdentifier;
@property (nonatomic) NSUUID requestIdentifier;
@property (nonatomic) q requestType;
- (long long)requestType;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)requestIdentifier;
- (void)setRequestType:;
- (id)bundleIdentifier;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setRequestIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)externalVersionIdentifier;
- (void)setExternalVersionIdentifier:;
- (long long)archiveType;
- (void)setArchiveType:;
+ (BOOL)supportsSecureCoding;
@end
