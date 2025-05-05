@interface MDLSkinDeformer : NSObject
@property (nonatomic) NSArray jointPaths;
@property (nonatomic) NSData jointBindTransforms;
@property (nonatomic) {?=[4]} meshBindTransform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)jointPaths;
- (id)jointBindTransforms;
- (unsigned long long)copyJointBindTransformsInto:maxCount:;
- (id)meshBindTransform;
- (id)initWithJointPaths:jointBindTransforms:meshBindTransform:;
- (id)initWithJointPaths:jointBindTransforms:count:meshBindTransform:;
@end
