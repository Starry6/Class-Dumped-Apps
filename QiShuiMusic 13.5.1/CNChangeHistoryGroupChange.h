@interface CNChangeHistoryGroupChange : NSObject
@property (nonatomic) q changeType;
@property (nonatomic) CNGroup group;
@property (nonatomic) CNChangeHistoryAnchor changeAnchor;
@property (nonatomic) NSNumber changeID;
@property (nonatomic) NSString externalID;
@property (nonatomic) NSString externalURI;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSString groupIdentifier;
- (long long)changeType;
- (id)groupIdentifier;
- (id)externalID;
- (id)initWithCoder:;
- (void)setGroup:;
- (id)changeID;
- (void)setChangeType:;
- (id)group;
- (void)setExternalID:;
- (void)encodeWithCoder:;
- (id)externalModificationTag;
- (void).cxx_destruct;
- (void)setExternalModificationTag:;
- (id)description;
- (id)externalURI;
- (void)setExternalURI:;
- (id)initWithIdentifier:changeType:changeAnchor:changeID:externalID:;
- (id)changeAnchor;
- (void)setChangeAnchor:;
- (void)setChangeID:;
+ (BOOL)supportsSecureCoding;
@end
