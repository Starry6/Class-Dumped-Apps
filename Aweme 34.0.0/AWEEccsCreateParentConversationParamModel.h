@interface AWEEccsCreateParentConversationParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber inbox;
@property (nonatomic) NSArray participantsBizRoleObjects;
@property (nonatomic) NSString idempotentIdentifier;
- (void)setIdempotentIdentifier:;
- (id)idempotentIdentifier;
- (id)participantsBizRoleObjects;
- (void)setParticipantsBizRoleObjects:;
- (void).cxx_destruct;
- (id)inbox;
- (void)setInbox:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
