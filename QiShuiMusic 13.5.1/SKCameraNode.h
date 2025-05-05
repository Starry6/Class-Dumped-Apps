@interface SKCameraNode : SKNode
- (BOOL)containsNode:;
- (id)containedNodeSet;
- (id)cameraBoundingBox;
- (id)cameraBoundingBoxOverridingSceneSize:;
+ (BOOL)supportsSecureCoding;
@end
