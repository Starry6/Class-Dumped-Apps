@interface SFSportsSubscriptionRequestItem : SFDomainSubscriptionRequestItem
@property (nonatomic) NSString canonicalIdentifier;
@property (nonatomic) NSString sportIdentifier;
@property (nonatomic) NSString leagueIdentifier;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)canonicalIdentifier;
- (void)setCanonicalIdentifier:;
- (id)sportIdentifier;
- (void)setSportIdentifier:;
- (id)leagueIdentifier;
- (void)setLeagueIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
