@interface SCNSceneDatabase : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)addInstance:withName:class:;
+ (BOOL)supportsSecureCoding;
+ (id)sceneDatabase;
+ (id)lookUpKeyForObjectNamed:class:;
@end
