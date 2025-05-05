@interface TUConversationActivitySceneAssociationBehavior : NSObject
@property (nonatomic) NSString targetContentIdentifier;
@property (nonatomic) BOOL shouldAssociateScene;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)targetContentIdentifier;
- (id)copyWithZone:;
- (BOOL)shouldAssociateScene;
- (id)initWithTargetContentIdentifier:shouldAssociateScene:;
- (BOOL)isEquivalentToSceneAssociationBehavior:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultBehavior;
@end
