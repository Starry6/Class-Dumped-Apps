@interface DMFJoinControlGroupRequest : DMFTaskRequest
@property (nonatomic) DMFControlGroupIdentifier groupIdentifier;
@property (nonatomic) NSArray leaderIdentifiers;
@property (nonatomic) NSDate expirationDate;
- (id)groupIdentifier;
- (void)setGroupIdentifier:;
- (void)setExpirationDate:;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)leaderIdentifiers;
- (void)setLeaderIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
