@interface SWUpdateCollaborationParticipantsAction : SWAction
@property (nonatomic) SWCollaborationMetadata collaborationMetadata;
@property (nonatomic) NSArray addedIdentities;
@property (nonatomic) NSArray removedIdentities;
- (BOOL)isEqualToAction:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)collaborationMetadata;
- (id)initWithDestinationAction:;
- (void)encodeWithBSActionSettings:;
- (void)setCollaborationMetadata:;
- (id)addedIdentities;
- (id)removedIdentities;
- (id)initWithMetadata:addedIdentities:removedIdentites:;
- (void)setAddedIdentities:;
- (void)setRemovedIdentities:;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithMetadata:addedIdentities:removedIdentites:;
@end
