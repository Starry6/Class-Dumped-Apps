@interface ENGroup : NSObject
@property (nonatomic) _ENGroupInfo groupInfo;
@property (nonatomic) <ENCypher> cypher;
@property (nonatomic) ENGroupID groupID;
@property (nonatomic) NSArray participants;
@property (nonatomic) NSData sharedApplicationData;
@property (nonatomic) NSSet destinations;
- (id)groupID;
- (id)participants;
- (id)destinations;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)accountIdentity;
- (id)verifyAndRevealData:sendingDevice:cypherIdentifier:error:;
- (id)groupInfo;
- (void)setGroupInfo:;
- (id)cypher;
- (id)sharedApplicationData;
- (id)initWithGroupInfo:groupID:cypher:;
- (id)signAndConcealData:cypherIdentifier:error:;
- (void)setCypher:;
+ (BOOL)supportsSecureCoding;
+ (id)sortedGroupsFromGroups:;
@end
