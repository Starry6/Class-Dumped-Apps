@interface GKSCNNodeComponent : GKComponent
@property (nonatomic) SCNNode node;
@property (nonatomic) NSIndexPath serializableNodeIndexPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEntity:;
- (id)node;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithNode:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setNode:;
- (id)serializableNodeIndexPath;
- (void)setSerializableNodeIndexPath:;
- (void)agentWillUpdate:;
- (void)agentDidUpdate:;
+ (BOOL)supportsSecureCoding;
+ (id)componentWithNode:;
@end
