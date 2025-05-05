@interface DMFLeaveControlGroupRequest : DMFTaskRequest
@property (nonatomic) DMFControlGroupIdentifier groupIdentifier;
@property (nonatomic) NSArray leaderIdentifiers;
- (id)groupIdentifier;
- (void)setGroupIdentifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)leaderIdentifiers;
- (void)setLeaderIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
