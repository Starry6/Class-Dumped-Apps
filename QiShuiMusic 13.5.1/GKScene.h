@interface GKScene : NSObject
@property (nonatomic) NSArray entities;
@property (nonatomic) <GKSceneRootNodeType> rootNode;
@property (nonatomic) NSDictionary graphs;
- (id)init;
- (id)copy;
- (id)initWithCoder:;
- (id)entities;
- (void)removeEntity:;
- (void)addEntity:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rootNode;
- (id)copyWithZone:;
- (void)setRootNode:;
- (void)addGraph:name:;
- (void)removeGraph:;
- (id)graphs;
+ (BOOL)supportsSecureCoding;
+ (id)_sceneWithFileNamed:rootNode:;
+ (id)sceneWithFileNamed:rootNode:;
+ (id)sceneWithFileNamed:;
@end
