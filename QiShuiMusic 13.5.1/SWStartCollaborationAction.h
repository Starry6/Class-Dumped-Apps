@interface SWStartCollaborationAction : SWAction
@property (nonatomic) SWCollaborationMetadata collaborationMetadata;
- (BOOL)isEqualToAction:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithMetadata:;
- (id)collaborationMetadata;
- (id)initWithDestinationAction:;
- (void)encodeWithBSActionSettings:;
- (void)fulfillUsingURL:collaborationIdentifier:;
- (void)fulfillUsingURL:updatedMetadata:;
- (void)setCollaborationMetadata:;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithMetadata:;
@end
